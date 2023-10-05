# [69. Sqrt(x) (Easy)](https://leetcode.com/problems/sqrtx/)

<p>Given a non-negative integer <code>x</code>,return the square root of<code>x</code>rounded down to the nearest integer. The returned integer should be <strong>non-negative</strong> as well.</p>

<p>You <strong>must not use</strong> any built-in exponent function or operator.</p>

* For example, do not use <code>pow(x, 0.5)</code> in c++ or <code>x ** 0.5</code> in python.

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> x = 4
<strong>Output:</strong> 2
<strong>Explanation:</strong> The square root of 4 is 2, so we return 2.</pre>
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> x = 8
<strong>Output:</strong> 2
<strong>Explanation:</strong> The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned.</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= x &lt;= 2<sup>31</sup> - 1</code></li>
</ul>


## Solution 

```c++
class Solution {
public:
    int mySqrt(int x) {
        return sqrt(x);
    }
};
```
