# [Search in a sorted Matrix](https://www.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1)
## Medium
Given a strictly sorted 2D matrix mat[][] of size n x m&nbsp;and&nbsp;a number&nbsp;x. Find whether the number x is present in the matrix or not.Note: In a strictly sorted matrix, each row is sorted in strictly increasing order, and&nbsp;the first element of the ith&nbsp;row (i!=0) is greater than the last element of the (i-1)th&nbsp;row.Examples:
Input: mat[][] = [[1, 5, 9], [14, 20, 21], [30, 34, 43]], x = 14
Output: true
Explanation: 14 is present in the matrix, so output is true.

Input: mat[][] = [[1, 5, 9, 11], [14, 20, 21, 26], [30, 34, 43, 50]], x = 42Output: false
Explanation: 42 is not present in the matrix.
Input: mat[][] = [[87, 96, 99], [101, 103, 111]], x = 101Output: true
Explanation: 101 is present in the matrix.
Constraints:1 ≤ n, m ≤ 10001 ≤ mat[i][j] ≤ 1091 ≤ x ≤ 109