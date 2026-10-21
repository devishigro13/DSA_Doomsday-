# 344. Reverse String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen) ![Topic](https://img.shields.io/badge/Topic-Two_Pointers-blue) ![Topic](https://img.shields.io/badge/Topic-String-blue) ![Language](https://img.shields.io/badge/Language-cpp-orange)

## Metadata

| Field | Value |
| --- | --- |
| Runtime | 0 ms |
| Memory | 26.9 MB |
| Submission Date | 2026-10-21T11:50:18.442Z |
| Platform | leetcode |

## Problem Statement

<p>Write a function that reverses a string. The input string is given as an array of characters <code>s</code>.</p>

<p>You must do this by modifying the input array <a href="https://en.wikipedia.org/wiki/In-place_algorithm" target="_blank">in-place</a> with <code>O(1)</code> extra memory.</p>

<p>&nbsp;</p>
<p>

## Examples

**Example 1:**

```
</p>
<pre><strong>Input:</strong> s = ["h","e","l","l","o"]
<strong>Output:</strong> ["o","l","l","e","h"]
</pre><p>
```

**Example 2:**

```
</p>
<pre><strong>Input:</strong> s = ["H","a","n","n","a","h"]
<strong>Output:</strong> ["h","a","n","n","a","H"]
</pre>
<p>&nbsp;</p>
```

## Constraints

- <code>1 &lt;= s.length &lt;= 10<sup>5</sup></code>
- <code>s[i]</code> is a <a href="https://en.wikipedia.org/wiki/ASCII#Printable_characters" target="_blank">printable ascii character</a>.

## Solution

```cpp
class Solution {
public:
    void rev(vector<char>& s,int l,int r){
        if(l>=r) return;
        swap(s[l],s[r]);
        rev(s,l+1,r-1);
    }
    void reverseString(vector<char>& s) {
        int l=0,r=s.size()-1;
        rev(s,l,r);
    }
};
```

[View on LeetCode](https://leetcode.com/problems/reverse-string/)
