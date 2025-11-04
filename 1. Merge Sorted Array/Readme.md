# 🧩 LeetCode 88: Merge Sorted Array

**Difficulty:** Easy  
**Tags:** Array, Two Pointers, Sorting  

---

## 📘 Problem Statement

You are given two integer arrays `nums1` and `nums2`, both sorted in **non-decreasing order**, and two integers `m` and `n`, representing the number of elements in `nums1` and `nums2` respectively.

You need to **merge** `nums2` into `nums1` as one sorted array **in-place**.  

> ⚠️ The array `nums1` has enough space (size `m + n`) to hold additional elements from `nums2`. The first `m` elements denote the actual numbers, and the last `n` elements are placeholders (set to `0`).

---

## 🧮 Example

### Example 1
```python
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3  
Output: [1,2,2,3,5,6]
```

---

## 🔢 Constraints

| Constraint | Description |
|-------------|-------------|
| `0 <= nums.length <= 100` | The array can contain up to 100 elements. |
| `0 <= nums[i] <= 50` | Each element in the array ranges from 0 to 50. |
| `0 <= val <= 100` | The value to remove can range from 0 to 100. |


---

## Example:

Example 1:
```python
Input: nums1 = [1], m = 1, nums2 = [], n = 0  
Output: [1]
```

Example 2:

```python
Input: nums1 = [0], m = 0, nums2 = [1], n = 1  
Output: [1]
```
---

## Link:

``` bash
https://leetcode.com/problems/merge-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150
```
