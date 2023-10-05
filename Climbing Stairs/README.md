# [70. Climbing Stairs (Easy)](https://leetcode.com/problems/climbing-stairs/)

<p>You are climbing a staircase. It takes <code>n</code> steps to reach the top.</p>

<p>Each time you can either climb <code>1</code> or <code>2</code> steps. In how many distinct ways can you climb to the top?</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> n = 2
<strong>Output:</strong> 2
<strong>Explanation:</strong> There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> n = 3
<strong>Output:</strong> 3
<strong>Explanation:</strong> There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

* <code>1 &lt;= n &lt;= 45</code>

## Solution 
```c++
class Solution {
public:
    int climbStairs(int n) {
        if(n == 0 || n == 1) return 1;
        int prev = 1, curr = 1;
        for(int i = 2; i <= n; i++){
            int temp = curr;
            curr += prev;
            prev = temp;
        }
        return curr;
    }
};
```
