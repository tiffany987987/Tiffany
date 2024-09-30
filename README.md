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

# IntegerSet Project

## Table of Contents
- [Project Overview](#project-overview)
- [Features](#features)
- [Usage](#usage)
- [Code Example](#code-example)

## Project Overview
This project implements an `IntegerSet` class for manipulating a set of integers. This class supports inserting elements, calculating the union and intersection of sets, and comparing the equality of two sets. The program demonstrates how to use the `IntegerSet` class to perform these operations.

## Features
- Insert elements into the integer set
- Calculate the union of two integer sets
- Calculate the intersection of two integer sets
- Compare the equality and inequality of two integer sets
- Print the contents of the integer set

## Usage
1. Clone the repository to your local machine:
    ```bash
    git clone https://github.com/yourusername/IntegerSet.git
    cd IntegerSet
    ```

2. Compile the code:
    ```bash
    g++ main.cpp IntegerSet.cpp -o IntegerSet
    ```

3. Run the program:
    ```bash
    ./IntegerSet
    ```

## Code Example
Here is a sample code from `main.cpp` demonstrating how to use the `IntegerSet` class:

```cpp
#include <iostream>
#include "IntegerSet.h"
using namespace std;

int main(int argc, const char * argv[]) {
    IntegerSet s1, s2;

    // Insert elements into set s1
    for(int i=0; i<7; i++) s1.insertElement(3*i+2);
    // Insert elements into set s2
    for(int i=0; i<8; i++) s2.insertElement(2*i+2);

    // Print set contents
    s1.printSet();
    cout << endl;
    s2.printSet();
    cout << endl;

    // Calculate and print the union
    s1.unionOfSets(s2);
    cout << "Union:" << endl;
    s1.printSet();
    cout << endl;

    // Reset set s1 and calculate intersection
    s1.Reset();
    for(int i=0; i<7; i++) s1.insertElement(3*i+2);
    s1.intersectionOfSets(s2);
    cout << "Intersection:" << endl;
    s1.printSet();
    cout << endl;

    // Compare set equality
    cout << "s1 == s2 : " << boolalpha << s1.isEqualTo(s2) << endl;
    cout << "s2 != s2 : " << boolalpha << s2.isNotEqualTo(s2) << endl;

    return 0;
}
