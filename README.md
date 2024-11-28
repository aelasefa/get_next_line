# get_next_line

`get_next_line` is a C programming project that provides a function to read a line from a file descriptor, handling multiple lines efficiently. The function reads input from a file, a terminal, or any file descriptor until it encounters a newline or end of file (EOF). It is a commonly used function for low-level file handling.

## Table of Contents

- [Description](#description)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Examples](#examples)
- [License](#license)

## Description

The `get_next_line` function reads a line from a given file descriptor. It handles multiple edge cases such as:
- Reading and returning multiple lines of input.
- Managing large inputs using dynamic memory allocation.
- Detecting end of file (EOF) and handling it properly.

The goal of this project is to implement a basic but efficient function for reading lines from a file, similar to the standard `getline` function, but with the flexibility to handle different types of file descriptors.

## Features

- Reads a single line from a file descriptor at a time.
- Handles large inputs efficiently through dynamic memory allocation.
- Handles multiple file descriptors.
- Works on Unix-like systems such as Linux and macOS.

## Installation

To get started with this project, follow these steps:

1. Clone the repository:

   ```bash
   git clone https://github.com/aelasefa/get_next_line.git
