# DSA Patterns

## 1. Array Patterns

### A. Two Pointers
* Opposite ends (left + right)
* Same direction (fast & slow pointers)
* Partition / Dutch flag

### B. Sliding Window
* Fixed size
* Variable size
  * Expand - Shrink
  * Monotonic Window

---

## I. Sliding Window

* It is used when we need to process a series of data elements like a list or string.
* In the sliding window pattern, we find specific things in a list by looking at a smaller part of the list at a time.
* The part of the list we are looking at is called a "window". This window then slides one step at a time until the entire list is scanned.

### When to use Sliding Window:
* If a problem asks us to **find a subset of elements** that satisfies a given condition, think about the sliding window pattern.
* Our input would be a linear data structure like an array, string, or a linked-list. And we have to find the **longest or shortest substring or subarray** that satisfies a particular condition.

> ⚠️ **CRITICAL INTERVIEW TRAP:** The variable-size sliding window logic below ONLY works if all elements are **non-negative ($\ge 0$)**. If the array contains negative numbers, the window behavior breaks down because shrinking/expanding loses its predictable behavior. For negative numbers, use **Prefix Sum + Hash Map**.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// WARNING: Works ONLY for non-negative integers
int longestSubarrayWithSum(vector<int>& arr, int target) {
    int left = 0, right = 0;
    int currentSum = 0;
    int maxLength = 0;

    // 1. Expand the window to the right
    while (right < arr.size()) {
        currentSum += arr[right];

        // 2. Shrink the window from the left if the condition is violated
        while (currentSum > target && left <= right) {
            currentSum -= arr[left];
            left++;
        }

        // 3. Update the answer if the condition is met
        if (currentSum == target) {
            maxLength = max(maxLength, right - left + 1);
        }

        right++;
    }

    return maxLength;
}
```

---

## II. Two Pointer

It is used when we have to iterate through a sorted array.

**Visualization:**
```text
[ 1 | 3 | 4 | 7 | 8 ]
  ↑   ↑
 ptr1 ptr2
```

* ptr1 & ptr2 are two pointers, keeping track of an index in the array.

* By moving these pointers smartly, we can often solve the problem in a single pass, making the algorithm more efficient.

### A. Opposite Ends (Left + Right)

* Useful for searching pairs in a sorted array, like finding two numbers that add up to a `target`.

```cpp
#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSumSorted(vector<int>& arr, int target) {
    int ptr1 = 0;                // Left pointer
    int ptr2 = arr.size() - 1;   // Right pointer

    while (ptr1 < ptr2) {
        int sum = arr[ptr1] + arr[ptr2];

        if (sum == target) {
            return {ptr1, ptr2}; // Found the pair
        } else if (sum < target) {
            ptr1++;              // We need a larger sum, move left pointer
        } else {
            ptr2--;              // We need a smaller sum, move right pointer
        }
    }

    return {-1, -1}; // Not found
}
```
### B. Same Direction (Fast & Slow Pointers)

* Useful for in-place array modifications, like removing duplicates from a sorted array.

```cpp
#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int slow = 0; // Tracks the position of unique elements

    // Fast pointer iterates through the array
    for (int fast = 1; fast < nums.size(); fast++) {
        if (nums[fast] != nums[slow]) {
            slow++;
            nums[slow] = nums[fast]; // Move unique element to the front
        }
    }

    return slow + 1; // Return the new length
}
```
