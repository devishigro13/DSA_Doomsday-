# 50. Pow(x, n)

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow) ![Topic](https://img.shields.io/badge/Topic-Math-blue) ![Topic](https://img.shields.io/badge/Topic-Recursion-blue) ![Language](https://img.shields.io/badge/Language-cpp-orange)

## Metadata

| Field | Value |
| --- | --- |
| Runtime | 0 ms |
| Memory | 8.5 MB |
| Submission Date | 2026-10-21T08:17:05.946Z |
| Platform | leetcode |

## Problem Statement

<p>Implement <a href="http://www.cplusplus.com/reference/valarray/pow/" target="_blank">pow(x, n)</a>, which calculates <code>x</code> raised to the power <code>n</code> (i.e., <code>x<sup>n</sup></code>).</p>

<p>&nbsp;</p>
<p>

## Examples

**Example 1:**

```
</p>

<pre>
<strong>Input:</strong> x = 2.00000, n = 10
<strong>Output:</strong> 1024.00000
</pre>

<p>
```

**Example 2:**

```
</p>

<pre>
<strong>Input:</strong> x = 2.10000, n = 3
<strong>Output:</strong> 9.26100
</pre>

<p>
```

**Example 3:**

```
</p>

<pre>
<strong>Input:</strong> x = 2.00000, n = -2
<strong>Output:</strong> 0.25000
<strong>Explanation:</strong> 2<sup>-2</sup> = 1/2<sup>2</sup> = 1/4 = 0.25
</pre>

<p>&nbsp;</p>
```

## Constraints

- <code>-100.0 &lt; x &lt; 100.0</code>
- <code>-2<sup>31</sup> &lt;= n &lt;= 2<sup>31</sup>-1</code>
- <code>n</code> is an integer.
- Either <code>x</code> is not zero or <code>n &gt; 0</code>.
- <code>-10<sup>4</sup> &lt;= x<sup>n</sup> &lt;= 10<sup>4</sup></code>

## Solution

```cpp
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1.0;
        // rule : x^(-n) = 1/x^n
        long long power=n;
        bool neg=false;
        if(power<0){
            neg=true;
            power=-power;
        }
        double ans=1.0;
        while(power>0){
            if(power%2==1) ans=ans*x;
            x=x*x;
            power/=2;
        }
        if(neg) return 1.0/ans;
        return ans;
    }
};
```

[View on LeetCode](https://leetcode.com/problems/powx-n/)
