# 🚀 LeetCode 27: Remove Element

**Difficulty:** Easy  
**Tags:** Array, Two Pointers  

---

## 📘 Problem Statement

Given an integer array `nums` and an integer `val`, remove **all occurrences** of `val` in-place.  
The **order of the elements may be changed**.  
Then return the **number of elements** in `nums` which are **not equal** to `val`.

Let the number of such elements be `k`.  
To be accepted, your solution must:

1. Modify the array `nums` so that the **first k elements** contain all elements **not equal** to `val`.  
2. The remaining elements of `nums` beyond `k` do not matter.  
3. Return `k`.

---

## ⚙️ Custom Judge Explanation

The judge will test your solution using the following code:

```java
int[] nums = [...]; // Input array
int val = ...; // Value to remove
int[] expectedNums = [...]; // Expected output array (no occurrences of val)
                            // Sorted with correct length

int k = removeElement(nums, val); // Calls your implementation

assert k == expectedNums.length;
sort(nums, 0, k); // Sort the first k elements
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
```

---

## Constraints

| Constraint                | Description                                           |
| ------------------------- | ----------------------------------------------------- |
| `0 <= nums.length <= 100` | The array can have up to 100 elements.                |
| `0 <= nums[i] <= 50`      | Each element in the array can range between 0 and 50. |
| `0 <= val <= 100`         | The value to remove can range between 0 and 100.      |


---

## Examples

Example 1:
```python
Input: nums = [3,2,2,3], val = 3  
Output: 2, nums = [2,2,_,_]


```

Example 2:
```python
Input: nums = [0,1,2,2,3,0,4,2], val = 2  
Output: 5, nums = [0,1,4,0,3,_,_,_]

```