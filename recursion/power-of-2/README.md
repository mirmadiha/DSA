# Power of 2

## Problem Description
Write a C++ program to calculate and print the power of 2 for a given integer `n`.

## Code Explanation
- The program uses a recursive function `power(int n)` to calculate \( 2^n \).
- The base case is when `n == 0`, returning `1` since \( 2^0 = 1 \).
- For other values of `n`, the function recursively calculates \( 2^n \) as \( 2 \times 2^{n-1} \).

## Example

**Input:**
```
enter the power:
3
```
**Output:**
```
8
