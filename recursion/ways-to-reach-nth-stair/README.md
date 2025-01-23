# Ways to Reach the n'th Stair

## Problem Statement

There are `n` stairs, and a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. Count the number of ways the person can reach the top (order does matter).

## Examples

### Example 1:
Input: `n = 4`  
Output: `5`  
Explanation: You can reach the 4th stair in 5 ways:
1. Climb 2 stairs at a time.
2. Climb 1 stair at a time.
3. Climb 2 stairs, then 1 stair, and then 1 stair.
4. Climb 1 stair, then 2 stairs, then 1 stair.
5. Climb 1 stair, then 1 stair, and then 2 stairs.

### Example 2:
Input: `n = 10`  
Output: `89`  
Explanation: There are 89 ways to reach the 10th stair.

### Example 3:
Input: `n = 3`  
Output: `3`  
Explanation: There are 3 ways to reach the 3rd stair.

## Constraints
- `1 ≤ n ≤ 44`
