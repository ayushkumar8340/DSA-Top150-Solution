# 🔄 LeetCode 189: Rotate Array

**Difficulty:** Medium  
**Tags:** Array, Math, Two Pointers  

---

## 📘 Problem Statement

Given an integer array `nums`, rotate the array to the **right** by `k` steps, where `k` is **non-negative**.

---

## 🧮 Examples

### Example 1
```python
Input: nums = [1,2,3,4,5,6,7], k = 3  
Output: [5,6,7,1,2,3,4]
```

--- 

## Constraints

| Constraint                     | Description                                                  |
| ------------------------------ | ------------------------------------------------------------ |
| `1 <= nums.length <= 10^5`     | The array can have up to 100,000 elements.                   |
| `-2^31 <= nums[i] <= 2^31 - 1` | Each element can range from -2,147,483,648 to 2,147,483,647. |
| `0 <= k <= 10^5`               | The number of rotation steps can be up to 100,000.           |

---