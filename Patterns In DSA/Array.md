content = """# DSA Patterns

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

## Sliding Window

* It is used when we need to process a series of data elements like a list or string.
* In the sliding window pattern, we find specific things in a list by looking at a smaller part of the list at a time.
* The part of the list we are looking at is called a "window". This window then slides one step at a time until the entire list is scanned.

### When to use Sliding Window:
* If a problem asks us to **find a subset of elements** that satisfies a given condition, think about the sliding window pattern.
* Our input would be a linear data structure like an array, string, or a linked-list. And we have to find the **longest or shortest substring or subarray** that satisfies a particular condition.

---

## II. Two Pointer

It is used when we have to iterate through a sorted array.

**Visualization:**
```text
[ 1 | 3 | 4 | 7 | 8 ]
  ↑   ↑
 ptr1 ptr2

* ptr1 & ptr2 are two pointers, keeping track of an index in the array.

* By moving these pointers smartly, we can often solve the problem in a single pass, making the algorithm more efficient.

```