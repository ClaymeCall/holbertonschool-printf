#!/bin/bash

# Define the source files (located in the parent directory)
SRC_FILES=$(ls ../*.c)
TEST_FILE="test.c"

# Define the output executable name
OUTPUT_EXEC="printf_tester"

# Change to the parent directory to compile
cd ..

# Compile the program with the specified flags
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format $SRC_FILES tests/$TEST_FILE -o tests/$OUTPUT_EXEC

# Check if the compilation was successful
if [ $? -eq 0 ]; then
	# Change back to the tests directory to run the executable
	cd tests

    # Run the program
    ./$OUTPUT_EXEC

    # Remove the executable after running
    rm -f $OUTPUT_EXEC
else
	echo "Compilation failed."
	# Change back to the tests directory if compilation fails
	cd tests
fi
