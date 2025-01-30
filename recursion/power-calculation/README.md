# Power Calculation in C++

## Description  
This program calculates the power of a number \( a^b \) using recursion. It optimizes computation by reducing the exponent in each step.

## Algorithm  
- If `b == 0`, return 1 (base case).  
- If `b == 1`, return `a`.  
- If `b` is even, compute `a^(b/2)` once and square it.  
- If `b` is odd, compute `a^(b/2)`, square it, and multiply by `a`.
  
## Sample Input/Output  
**Input:**  
```
Enter value of a: 2  
Enter value of b: 5  
```
**Output:**  
```
The power(a,b) = 32
```

## Complexity  
- **Time Complexity:** \( O(b) \) (can be optimized using exponentiation by squaring to \( O(\log b) \)).  
- **Space Complexity:** \( O(b) \) due to recursive calls.
