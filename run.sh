#!/bin/bash

# Set the name of the binary file
binary_name = "a"

# Compile the C++ code
g++ -o "binary_name" "$1" -lfreeglut -lopengl32 -lglu32

# Check if the compilation was successful
if [ $? -eq 0 ]; then
  # If compilation succeeded, run the program
  ./"binary_name"
  # Delete the executable
  rm "binary_name"
else
  # If compilation failed, display an error message
  echo "Compilation failed"
fi
