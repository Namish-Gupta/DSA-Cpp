# Frequency of the Most Frequent Element

## Question
The frequency of an element is the number of times it occurs in an array.

You are given an integer array nums and an integer k. In one operation, you can choose an index of nums and increment the element at that index by 1.

Return the maximum possible frequency of an element after performing at most k operations.

---

## 🔴 Brute Force
**Why it's bad:** For every single element in the array, we try to treat it as the "target" maximum frequency. We would then iterate backwards through all other elements to see how many we can increment to match that target using $k$ operations. This involves nested loops and redundant calculations for every index.

* **Time Complexity:** $O(n^2)$
* **Space Complexity:** $O(1)$ (if sorting is not counted, but usually $O(\log n)$ for the initial sort).

---

## 🟢 Optimal Approach
### Sliding Window (Two Pointers)
**Why it's best:** After sorting, we can maintain a window [left...right]. We always try to make every element in the window equal to the largest element (the one at nums[right]). This is the most efficient way to use our budget k.

### ⚙️ Logic Breakdown
1. **Sort the Array:** Mandatory first step. Sorting ensures that for any window, `nums[right]` is the target value we want other elements to reach.
2. **Expand (Right Pointer):** We move the `right` pointer to include a new number. This is our current "Target Value."
3. **The Budget Calculation:** - **Goal:** Make everything in the window equal to `nums[right]`.
   - **Total Sum Needed:** `window_size * nums[right]`
   - **Current Sum:** The actual sum of numbers in our window.
   - **Operations Required:** `(window_size * nums[right]) - current_sum`.
4. **Shrink (Left Pointer):** If the **Operations Required** > `k`, it means our window is "too expensive" to maintain. We move the `left` pointer forward to drop the smallest (cheapest) number, reducing the total cost until it fits within budget `k`.
5. **Update Max Frequency:** The maximum frequency is the largest window size (`right - left + 1`) we achieved during the process.

* **Time Complexity:** $O(n \log n)$ (due to initial sorting; the window traversal is $O(n)$).
* **Space Complexity:** $O(1)$ (or $O(\log n)$ depending on the internal sorting implementation).

---

## 🔗 LeetCode Link
**Question no. 1838 on LeetCode:** (https://leetcode.com/problems/frequency-of-the-most-frequent-element/)