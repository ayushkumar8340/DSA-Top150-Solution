# 🧩 LeetCode 80: Remove Duplicates from Sorted Array II

**Difficulty:** Medium  
**Tags:** Array, Two Pointers  

---

## 📘 Problem Statement

Given an integer array `nums` **sorted in non-decreasing order**, remove some duplicates **in-place** such that each unique element appears **at most twice**.  
The **relative order** of the elements should remain the same.

Since it’s impossible to change the array’s length in some programming languages,  
the result must be placed in the **first part of the array** `nums`.

More formally:  
If there are `k` elements after removing the duplicates,  
then the first `k` elements of `nums` should contain the final result.  
It does not matter what you leave beyond index `k - 1`.

Return `k` after placing the final result in the first `k` slots of `nums`.

> ⚠️ Do not allocate extra space for another array.  
> You must modify the input array **in-place** with **O(1)** extra memory.

---

## ⚙️ Custom Judge Explanation

The judge will test your solution using the following code:

```java
int[] nums = [...]; // Input array
int[] expectedNums = [...]; // Expected result with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}

```

---

## Constraints

| Constraint                                | Description                                     |
| ----------------------------------------- | ----------------------------------------------- |
| `1 <= nums.length <= 3 * 10^4`            | The array can have up to 30,000 elements.       |
| `-10^4 <= nums[i] <= 10^4`                | Each element can be between -10,000 and 10,000. |
| `nums` is sorted in non-decreasing order. | Ensures duplicates are consecutive.             |

---

## Examples

Example 1:

```python
Input: nums = [1,1,1,2,2,3]
Output: 5, nums = [1,1,2,2,3,_]
```

Example 2:

```python
Input: nums = [0,0,1,1,1,1,2,3,3]
Output: 7, nums = [0,0,1,1,2,3,3,_,_]
```