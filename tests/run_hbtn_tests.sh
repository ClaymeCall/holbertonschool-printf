#!/bin/bash


if [$PWD -eq "/holbertonschool_printf"]; then
	cd tests
fi

# Define the source files (located in the parent directory)
SRC_FILES=$(ls ../*.c)
TEST_FILE="holberton_test.c"

# Define the output executable name
OUTPUT_EXEC="printf_tester"

# Compile the program with the specified flags
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format $SRC_FILES $TEST_FILE -o $OUTPUT_EXEC

# Check if the compilation was successful
if [ $? -eq 0 ]; then

    # Run the program
    ./$OUTPUT_EXEC

    # Remove the executable after running
    rm -f $OUTPUT_EXEC
else
	echo "Compilation failed."
fi
