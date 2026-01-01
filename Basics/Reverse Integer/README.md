# Reverse Integer

## Question
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

---

## Approach
Simply getting each digit out from the last, multiplying by 10 and adding it to the answer reverses the integer.

* **Time Complexity:** $O(\log n)$
* **Space Complexity:** $O(1)$

---

## 🔗 LeetCode Link
**Question no. 7 on LeetCode:** (https://leetcode.com/problems/reverse-integer/)