# [204. Count Primes (Easy)](https://leetcode.com/problems/count-primes/description/)

<p>Count the number of prime numbers less than a non-negative number, <code>n</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> n = 10
<strong>Output:</strong> 4
<strong>Explanation:</strong> There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> n = 0
<strong>Output:</strong> 0
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> n = 1
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= n &lt;= 5 * 10<sup>6</sup></code></li>
</ul>

## Solution - Sieve of Eratosthenes
```c++
class Solution {
public:
    int countPrimes(int n) {
        vector<bool>isPrime(n, true);

        for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) { 
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                count++;
            }
        }

        return count;
    }
};
```
