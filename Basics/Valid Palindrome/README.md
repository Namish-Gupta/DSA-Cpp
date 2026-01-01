# Valid Palindrome

## Question
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

---

## 🔴 Brute Force
**Why it's bad:** It requires extra space to store a filtered version of the string. It also performs multiple passes: one pass to filter characters, one pass to reverse the string, and one pass to compare them. This is inefficient for very long strings.

* **Time Complexity:** $O(n)$ — Three linear passes (filter, reverse, compare).
* **Space Complexity:** $O(n)$ — To store the `cleaned` and `reversed_s` strings.

---

## 🟢 Optimal Approach
### Two Pointers (In-place)
**Why it's best:** It uses two pointers (`start` and `end`) to compare characters from both ends moving toward the center. It skips non-alphanumeric characters on the fly using `isalnum()` and handles case-insensitivity using `tolower()`. This avoids creating any extra strings.

* **Time Complexity:** $O(n)$ — We visit each character at most once.
* **Space Complexity:** $O(1)$ — Only two integer variables are used regardless of string size.

---

## ⚙️ Logic Breakdown
1. **Pointers:** Initialize `start` at 0 and `end` at `length - 1`.
2. **Skip Non-Alphanumeric:** If the character at `start` is not a letter or number, increment `start`. If the character at `end` is not a letter or number, decrement `end`.
3. **Compare:** Convert both characters to lowercase and compare. If they don't match, return `false` immediately.
4. **Move Inward:** If they match, increment `start` and decrement `end` to check the next pair.

---

## 🔗 LeetCode Link
**Question no. 125 on LeetCode:** (https://leetcode.com/problems/valid-palindrome/)