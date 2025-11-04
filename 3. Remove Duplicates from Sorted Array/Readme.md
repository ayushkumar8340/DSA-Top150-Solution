# 🧩 LeetCode 26: Remove Duplicates from Sorted Array

**Difficulty:** Easy  
**Tags:** Array, Two Pointers  

---

## 📘 Problem Statement

Given an integer array `nums` **sorted in non-decreasing order**, remove the **duplicates in-place** such that each unique element appears only once.  
The **relative order** of the elements should remain the same.

After removing duplicates, return the **number of unique elements** `k`.

The first `k` elements of `nums` should contain the unique numbers in sorted order.  
The remaining elements beyond index `k - 1` can be ignored.

---

## ⚙️ Custom Judge Explanation

The judge will test your solution using the following code:

```java
int[] nums = [...]; // Input array
int[] expectedNums = [...]; // Expected output with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
```

---

## Constraints

| Constraint                                | Description                                      |
| ----------------------------------------- | ------------------------------------------------ |
| `1 <= nums.length <= 3 * 10^4`            | The array length can be up to 30,000.            |
| `-100 <= nums[i] <= 100`                  | Each element is an integer between -100 and 100. |
| `nums` is sorted in non-decreasing order. | Ensures duplicates are consecutive.              |

---

## Examples:

Example 1:
``` python
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
```

Example 2:
```python
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
```
