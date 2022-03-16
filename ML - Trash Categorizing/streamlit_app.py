import streamlit as st
import requests
import base64
import io
from PIL import Image
import torch
import numpy as np

#Import the model and the weights
model = torch.hub.load(r'D:\My-personal-projects\My-personal-projects\ML - Trash Categorizing\yolov5-master', 'custom', path=r'D:\My-personal-projects\My-personal-projects\ML - Trash Categorizing\yolov5 training weights\second.pt', source = 'local', force_reload=True)


##########
##### Set up sidebar.
##########

# Add in location to select image.

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
    url = 'https://github.com/pyramixofficial/My-personal-projects/blob/main/ML%20-%20Trash%20Categorizing/BCCD_sample_images/trash_img.jpg?raw=true'
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
