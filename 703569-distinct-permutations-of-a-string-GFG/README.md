# [Distinct Permutations of a String](https://www.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1?)
## Medium
Given a string s, which may contain duplicate characters, generate all possible unique permutations of the string.
Note: You may return the permutations in any order.
Examples:
Input: s = "ABC"
Output: ["ABC", "ACB", "BAC", "BCA", "CAB", "CBA"]
Explanation: Given string ABC has 6 unique permutations.

Input: s = "ABSG"
Output: ["ABGS", "ABSG", "AGBS", "AGSB", "ASBG", "ASGB", "BAGS", "BASG", "BGAS", "BGSA", "BSAG", "BSGA", "GABS", "GASB", "GBAS", "GBSA", "GSAB", "GSBA", "SABG", "SAGB", "SBAG", "SBGA", "SGAB", "SGBA"]
Explanation: Given string ABSG has 24 unique permutations.

Input: s = "AAA"
Output: ["AAA"]Explanation: No other unique permutations can be formed as all the characters are same.
Constraints:1 ≤ s.size() ≤ 9s contains only uppercase English letters.