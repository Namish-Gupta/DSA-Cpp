# Palindrome Number

## Question
Given an integer x, return true if x is a palindrome, and false otherwise.

---

## Approach
Simply getting each digit out from the last, multiplying by 10 and adding it to the reversed number reverses the integer. Then compare the original with the reversed integer to get the answer. Negative numbers cannot be palindromes due to their negative sign.

* **Time Complexity:** $O(\log n)$
* **Space Complexity:** $O(1)$

---

## 🔗 LeetCode Link
**Question no. 9 on LeetCode:** (https://leetcode.com/problems/palindrome-number/)