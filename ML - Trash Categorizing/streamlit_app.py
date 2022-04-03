from pprint import pprint
import streamlit as st
import requests
import base64
import io
from PIL import Image
import torch
import numpy as np
import cv2
from matplotlib import cm
import pandas as pd
#Import the model and the weights
model = torch.hub.load(r"D:\My-personal-projects\My-personal-projects\ML - Trash Categorizing\yolov5-master", 'custom', path=r"D:\My-personal-projects\My-personal-projects\ML - Trash Categorizing\yolov5 training weights\second.pt", source = 'local', force_reload=True)


##########
##### Set up sidebar.
##########

# Add in location to select image.
logo = Image.open(r'D:\My-personal-projects\My-personal-projects\ML - Trash Categorizing\images\tekwill_logo.png')
st.sidebar.image(logo, use_column_width=True)
st.sidebar.write('#### Select the app mode you want to use.')

#creating the mode choice button
mode = ["About", "Photo", "Camera detection"]
choice = st.sidebar.selectbox("Select Activity", mode)
if choice == "Photo":
    st.sidebar.write('#### Select an image to upload.')

    uploaded_file = st.sidebar.file_uploader('',
                                            type=['png', 'jpg', 'jpeg'],
                                            accept_multiple_files=False)

    ##########
    ##### Set up main app.
    ##########

    ## Title.
    st.write('# Trash type Detection')


    ## Pull in default image or user-selected image.
    if uploaded_file is None:
        # Default image.
        url = 'https://raw.githubusercontent.com/pyramixofficial/My-personal-projects/main/ML%20-%20Trash%20Categorizing/imagees/trash_img.jpg'
        image = Image.open(requests.get(url, stream=True).raw)

    else:
        # User-selected image.
        image = Image.open(uploaded_file)

    ## Subtitle.
    st.write('### Inferenced Image')

    #Processing and saving the image 
    image_result = model(image, size = 640)
    image_result.save(save_dir = r'D:\My-personal-projects\My-personal-projects\ML - Trash Categorizing\results')
    

    #Opening the saved image
    result_image = Image.open(r'D:\My-personal-projects\My-personal-projects\ML - Trash Categorizing\results\image0.jpg')
    
    # Display image.
    st.image(result_image,
            caption= 'Processed image',
            use_column_width=True)

    st.write("### Save the processed data to a csv here:)")

    # Saving the data into a csv
    if st.button("Save data"):
        t_np = image_result.__dict__['pred'][0].cpu().numpy() #convert to Numpy array
        df = pd.DataFrame(t_np, columns=['x_first', 'y_first', 'x_second', 'y_second', 'probability', 'type']) #convert to a dataframe
        df['type'] = df['type'].apply(lambda x: image_result.__dict__['names'][int(x)])
        df.to_csv("data.csv") #save to file
        st.write("Data was saved to data.csv")


#Settin the camera detection option
elif choice == "Camera detection":
    st.header("Live Camera")
    run = st.checkbox('Run')
    FRAME_WINDOW = st.image([])
    cam = cv2.VideoCapture(0)
    cam.set(cv2.CAP_PROP_FRAME_WIDTH, 640)
    cam.set(cv2.CAP_PROP_FRAME_HEIGHT, 640)


    while run:
        #Reading and converting the image
        ret, frame = cam.read()
        frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        #Making predictions on the image and printing it on the app
        frame = model(frame, size=640)
        FRAME_WINDOW.image(frame.render())
        
    else:
        st.write('Stopped')

#The description page of the project
elif choice == "About":
    st.write("# Tekwill Junior Ambassadors ")
    st.write("### This is a project created by Eduard Balamatiuc and Daria Gheorghieș")
    st.write("### The problem addressed:")
    st.write("### Our solution to the problem:")