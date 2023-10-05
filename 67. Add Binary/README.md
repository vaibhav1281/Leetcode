# [67. Add Binary (Easy)](https://leetcode.com/problems/add-binary/)

<p>Given two binary strings <code>a</code> and <code>b</code>, return <em>their sum as a binary string</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> a = "11", b = "1"
<strong>Output:</strong> "100"
</pre><p><strong>Example 2:</strong></p>
<pre><strong>Input:</strong> a = "1010", b = "1011"
<strong>Output:</strong> "10101"
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= a.length, b.length &lt;= 10<sup>4</sup></code></li>
	<li><code>a</code> and <code>b</code> consist&nbsp;only of <code>'0'</code> or <code>'1'</code> characters.</li>
	<li>Each string does not contain leading zeros except for the zero itself.</li>
</ul>

## Solution 1.
```c++
class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string result = "";
        
        int i = a.length() - 1;
        int j = b.length() - 1;
        
        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry;
            if (i >= 0) {
                sum += a[i] - '0';
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0';
                j--;
            }
            
            carry = sum / 2;
            sum %= 2;
            
            result = to_string(sum) + result;
        }
        
        return result;
    }
};
```
## Solution 2. 
```c++
class Solution {
public:
    string addBinary(string A, string B) {
         if (A.length() > B.length())
        return addBinary(B, A);
 
   
    int diff = B.length() - A.length();
    string padding;
    for (int i = 0; i < diff; i++)
        padding.push_back('0');
 
    A = padding + A;
    string res;
    char carry = '0';
 
    for (int i = A.length() - 1; i >= 0; i--) {
       
        if (A[i] == '1' && B[i] == '1') {
            if (carry == '1')
                res.push_back('1'), carry = '1';
            else
                res.push_back('0'), carry = '1';
        }
       
        else if (A[i] == '0' && B[i] == '0') {
            if (carry == '1')
                res.push_back('1'), carry = '0';
            else
                res.push_back('0'), carry = '0';
        }
       
        else if (A[i] != B[i]) {
            if (carry == '1')
                res.push_back('0'), carry = '1';
            else
                res.push_back('1'), carry = '0';
        }
    }
 
  
    if (carry == '1')
        res.push_back(carry);
   
    reverse(res.begin(), res.end());
 
   
    int index = 0;
    while (index + 1 < res.length() && res[index] == '0')
        index++;
    return (res.substr(index));
        
    }
};
```
