# Fibonacci Number

## Question
The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).

---

## 🔴 Brute Force
**Why it's bad:** It uses simple recursion which results in a massive "Recursion Tree." The same values (like `fib(2)`) are calculated over and over again. This leads to exponential time complexity, which crashes for even moderately large values of `n`.

* **Time Complexity:** $O(2^n)$ — Every call branches into two more calls.
* **Space Complexity:** $O(n)$ — Due to the recursion stack depth.

---

## 🟡 Better Approach
### Dynamic Programming (Tabulation)
**Why it's better:** We use an array `dp[]` to store the results of subproblems. We calculate each Fibonacci number once, store it, and move on. This is $O(n)$ time but uses extra memory.

* **Time Complexity:** $O(n)$
* **Space Complexity:** $O(n)$ — To store the DP array.

---

## 🟢 Optimal Approach
### Space-Optimized Iterative
**Why it's best:** We realize that to calculate the current Fibonacci number, we only ever need the **last two** numbers. Instead of an entire array, we just use two variables (`a` and `b`) and update them in a loop.

* **Time Complexity:** $O(n)$ — One single loop from 2 to $n$.
* **Space Complexity:** $O(1)$ — We only use three integer variables regardless of $n$.

---

## 🔗 LeetCode Link
**Question no. 509 on LeetCode:** (https://leetcode.com/problems/fibonacci-number/)