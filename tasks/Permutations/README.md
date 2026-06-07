# Beautiful Permutation

A permutation of integers 1, 2, ..., n is called beautiful if there are no adjacent elements whose difference is 1.

Given n, construct a beautiful permutation if such a permutation exists. If there are multiple solutions, any valid one can be printed. If no solution exists, print "NO SOLUTION".

# Input

The only input line contains an integer n.

# Output

Print a beautiful permutation of integers 1, 2, ..., n, or "NO SOLUTION" if it does not exist.

# Constraints

1 ≤ n ≤ 10^6

# Idea

A valid construction is to place all even numbers first, followed by all odd numbers.

This prevents adjacent numbers from differing by 1.

Special cases:
- If n = 1 → output 1
- If n = 2 or n = 3 → no solution

# Example 1

## Input
5

## Output
4 2 5 3 1

# Example 2

## Input
3

## Output
NO SOLUTION
