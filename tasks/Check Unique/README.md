# Check Unique Digits

## Description

This program checks whether all digits in a given number are unique.

If a digit appears more than once, the program prints:

```text
NO
```

Otherwise, it prints:

```text
YES
```

## Example 1

Input:

```text
12345
```

Output:

```text
YES
```

## Example 2

Input:

```text
12245
```

Output:

```text
NO
```

## Concepts Practiced

- Arrays
- Boolean values (`bool`)
- While loops
- Extracting digits using `% 10`
- Removing digits using `/ 10`
- Duplicate detection

## Algorithm

1. Create an array of 10 boolean values initialized to `false`.
2. Extract digits one by one using `% 10`.
3. Check if the digit has already been seen.
4. If yes, print `NO`.
5. Otherwise, mark the digit as seen.
6. Continue until the number becomes `0`.
7. If no duplicates are found, print `YES`.
