# Factory Machine ID Recognition Project

## Table of Contents
- [Project Overview](#project-overview)
- [Usage](#usage)
- [Model Training](#model-training)
- [Results](#results)


## Project Overview
This project aims to identify factory machine IDs, which consist of the digits 0-9 and the letters A, B, C, P, Q, and R. The objective is to enhance the recognition accuracy beyond the current low accuracy of 73%. The approach includes various stages such as data preprocessing, model compilation, training, evaluation, and results discussion.


## Usage


1.Prepare your dataset in the format specified in the project (e.g., images in folders categorized by ID).

2.Run the preprocessing script to clean and augment your dataset.

3.Train the model with the training script:

python train_model.py

## Model Training


This project utilizes a Convolutional Neural Network (CNN) architecture for recognizing machine IDs. The model is trained using TensorFlow and Keras. Below is a brief summary of the training process:

Data Augmentation: Techniques applied include flipping images, resizing, and normalizing pixel values.

Model Architecture: The CNN consists of several convolutional layers followed by max pooling, dropout layers, and a dense output layer.

Training Parameters:

Learning Rate: 0.0003

Batch Size: 1

Epochs: 50

## Result
The model was evaluated on the test set, achieving an impressive accuracy of 95.23%. This performance indicates a significant improvement over the previous accuracy of 73%.
