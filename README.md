# HandWritten-Digit-Recognition


## Overview

This project is an implementation of a neural network to classify handwritten digits from the MNIST dataset. The entire project is written in plain C, without using any machine learning libraries.

## Features

- Reading MNIST dataset in C
- Byte-swapping for cross-platform compatibility
- Feedforward Neural Network
- Backpropagation for training


### Reading MNIST Data

The function `read_mnist_char` reads the MNIST data files and populates arrays with image and label data. It also performs byte-swapping to ensure cross-platform compatibility.

### Neural Network Architecture

The neural network is a simple feedforward network with one hidden layer. The activation function used is the sigmoid function.

### Training Algorithm

The network is trained using the backpropagation algorithm.

## Simulations

- Training Accuracy: TBD
- Testing Accuracy: TBD

## Contributing

Feel free to fork the project and submit a pull request with your changes!

## License

This project is licensed under the MIT License.

## Acknowledgments

- The MNIST dataset for providing the handwritten digits.
- Everyone who contributed to improving this project.
