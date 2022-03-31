import streamlit as st
import requests
import base64
import io
from PIL import Image
import torch
import numpy as np
import cv2
from matplotlib import cm
help(Image)
#Import the model and the weights
model = torch.hub.load(r'D:\My-personal-projects\My-personal-projects\ML - Trash Categorizing\yolov5-master', 'custom', path=r'D:\My-personal-projects\My-personal-projects\ML - Trash Categorizing\yolov5 training weights\second.pt', source = 'local', force_reload=True)


##########
##### Set up sidebar.
##########

# Add in location to select image.
st.sidebar.write('#### Select the app mode you want to use.')
mode = ["Photo", "Camera detection", "About"]
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

elif choice == "Camera detection":
    st.header("Live Camera")
    run = st.checkbox('Run')
    FRAME_WINDOW = st.image([])
    cam = cv2.VideoCapture(0)
    cam.set(cv2.CAP_PROP_FRAME_WIDTH, 640)
    cam.set(cv2.CAP_PROP_FRAME_HEIGHT, 640)


    while run:
        ret, frame = cam.read()
        frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        print(type(model(frame, size=640)))
        FRAME_WINDOW.image()
    else:
        st.write('Stopped')
