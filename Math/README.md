# [258. Add Digits (Easy)](https://leetcode.com/problems/add-digits/description/)
<p>Given an integer <code>num</code>, repeatedly add all its digits until the result has only one digit, and return it.</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> num = 38
<strong>Output:</strong> 2
<strong>Explanation:</strong> 
  
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> num = 0
<strong>Output:</strong> 0
</pre>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n &lt;= num &lt;= 2<sup>31</sup> - 1</code></li>
</ul>
<strong>Follow-up:&nbsp;</strong> Could you do it without any loop/recursion in <code>O(1)</code> runtime?

## Solution

```cpp
class Solution {
public:
    int addDigits(int num) {
        while(num >=10){
            int sum = 0;
            while(num > 0){
                sum += num % 10;
                num /=10;
            }
            num = sum;
        }
        return num;
    }
    
};
```

<p></p>
<p></p>
