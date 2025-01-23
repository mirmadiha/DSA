# Say Digits Using Recursion

## Problem Statement
Write a program in C++ to print the digits of a given number in words using recursion.

## Description
The program takes an integer as input and recursively breaks it down to extract each digit. Using a predefined mapping of digits to their corresponding word representation, the program prints the digits in the correct order.

## Example
### Input:
```
Enter the number: 203
```
### Output:
```
two zero three
```

## Key Features
- **Recursive Approach**: Extracts digits one by one and prints them in the correct order using recursion.
- **Mapping with `std::map`**: Uses a `map` to store the digit-to-word mapping for easy lookup.

## Constraints
- The input number should be a non-negative integer.
- Handles the edge case for `0` by directly mapping it to "zero."

## How It Works
1. The `sayDigits` function takes the number and a map of digit-to-word mappings as arguments.
2. Recursively processes the number by extracting the last digit and removing it from the number.
3. Prints the word corresponding to each digit in the correct order after the recursive call.

## Usage
1. Compile the program using a C++ compiler.
2. Run the executable and input a number when prompted.
3. View the digits of the number printed in words.
