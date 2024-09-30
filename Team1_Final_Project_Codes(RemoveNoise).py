import os
from PIL import Image
import numpy as np
import matplotlib.pyplot as plt

# Specify the folder path
folder_path = 'datasets/noise/9'

# Create a new folder to save the processed images
output_folder_path = 'datasets/noise/9/'

# Iterate through all files in the folder
for filename in os.listdir(folder_path):
    if filename.endswith(".jpg") or filename.endswith(".png"):
        image_path = os.path.join(folder_path, filename)
        
        # Load the original image
        original_image = Image.open(image_path)

        # Convert the image to grayscale
        gray_image = original_image.convert("L")

        # Convert the grayscale image to a numpy array
        image_array = np.array(gray_image)

        # Thresholding to create a binary image
        threshold = 128
        binary_image_array = np.where(image_array > threshold, 255, 0)

        # Create a new image from the binary array
        binary_image = Image.fromarray(np.uint8(binary_image_array))

        # Replace non-zero (white) pixels with white (255), and black (zero) pixels with black (0)
        output_image_array = np.where(binary_image_array == 255, 255, 0)
        output_image = Image.fromarray(np.uint8(output_image_array))

        # Display the original image and the processed image side by side
        fig, axes = plt.subplots(1, 2, figsize=(10, 5))

        # Original image
        axes[0].imshow(original_image, cmap='gray')
        axes[0].set_title("Original Image")
        axes[0].axis('off')

        # Processed image
        axes[1].imshow(output_image, cmap='gray')
        axes[1].set_title("Processed Image")
        axes[1].axis('off')

        plt.tight_layout()
        # plt.show()

        # Save the processed image
        output_filename = os.path.splitext(filename)[0] + '_processed.jpg'
        output_path = os.path.join(output_folder_path, output_filename)
        output_image.save(output_path)

print("All images have been processed and saved.")
