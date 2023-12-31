# [9. Palindrome Number (Easy)](https://leetcode.com/problems/palindrome-number/)
<p>Determine whether an integer is a palindrome. An integer&nbsp;is&nbsp;a&nbsp;palindrome when it&nbsp;reads the same backward as forward.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> x = 121
<strong>Output:</strong> true
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> x = -121
<strong>Output:</strong> false
<strong>Explanation:</strong> From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> x = 10
<strong>Output:</strong> false
<strong>Explanation:</strong> Reads 01 from right to left. Therefore it is not a palindrome.
</pre>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>-2<sup>31</sup> &lt;= x &lt;= 2<sup>31</sup> - 1</code></li>
</ul>

<p><strong>Follow up:</strong></p>

<p>Coud you solve&nbsp;it without converting the integer to a string?</p>


## Solution
```Cpp
class Solution {
public:
    bool isPalindrome(int x) {        
        if(x < 0) return  false;
        long long rev = 0, temp = x, lastDigit;
        while(x){
            lastDigit = x % 10;
            rev = rev * 10 + lastDigit;
            x /=10;
        }
        return (temp == rev);
    }
};
```
