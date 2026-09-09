#!/bin/bash

echo "   Automotive ECU Build Script"

echo "Cleaning previous build..."
make clean

echo "Building project..."
make

echo "Build completed successfully."
