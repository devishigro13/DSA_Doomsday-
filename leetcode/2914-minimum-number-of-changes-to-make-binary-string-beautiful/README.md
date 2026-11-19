# 2914. Minimum Number of Changes to Make Binary String Beautiful

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow) ![Topic](https://img.shields.io/badge/Topic-String-blue) ![Language](https://img.shields.io/badge/Language-cpp-orange)

## Metadata

| Field | Value |
| --- | --- |
| Runtime | 4 ms |
| Memory | 13.8 MB |
| Submission Date | 2026-11-19T06:21:57.086Z |
| Platform | leetcode |

## Problem Statement

<p>You are given a <strong>0-indexed</strong> binary string <code>s</code> having an even length.</p>

<p>A string is <strong>beautiful</strong> if it&#39;s possible to partition it into one or more substrings such that:</p>

<ul>
	<li>Each substring has an <strong>even length</strong>.</li>
	<li>Each substring contains <strong>only</strong> <code>1</code>&#39;s or <strong>only</strong> <code>0</code>&#39;s.</li>
</ul>

<p>You can change any character in <code>s</code> to <code>0</code> or <code>1</code>.</p>

<p>Return <em>the <strong>minimum</strong> number of changes required to make the string </em><code>s</code> <em>beautiful</em>.</p>

<p>&nbsp;</p>
<p>

## Examples

**Example 1:**

```
</p>

<pre>
<strong>Input:</strong> s = &quot;1001&quot;
<strong>Output:</strong> 2
<strong>Explanation:</strong> We change s[1] to 1 and s[3] to 0 to get string &quot;1100&quot;.
It can be seen that the string &quot;1100&quot; is beautiful because we can partition it into &quot;11|00&quot;.
It can be proven that 2 is the minimum number of changes needed to make the string beautiful.
</pre>

<p>
```

**Example 2:**

```
</p>

<pre>
<strong>Input:</strong> s = &quot;10&quot;
<strong>Output:</strong> 1
<strong>Explanation:</strong> We change s[1] to 1 to get string &quot;11&quot;.
It can be seen that the string &quot;11&quot; is beautiful because we can partition it into &quot;11&quot;.
It can be proven that 1 is the minimum number of changes needed to make the string beautiful.
</pre>

<p>
```

**Example 3:**

```
</p>

<pre>
<strong>Input:</strong> s = &quot;0000&quot;
<strong>Output:</strong> 0
<strong>Explanation:</strong> We don&#39;t need to make any changes as the string &quot;0000&quot; is beautiful already.
</pre>

<p>&nbsp;</p>
```

## Constraints

- <code>2 &lt;= s.length &lt;= 10<sup>5</sup></code>
- <code>s</code> has an even length.
- <code>s[i]</code> is either <code>&#39;0&#39;</code> or <code>&#39;1&#39;</code>.

## Solution

```cpp
class Solution {
public:
    int minChanges(string s) {
        int mn_cnt=0;
        for(int i=0;i<s.size();i+=2){
            if(s[i]!=s[i+1]) mn_cnt++;
        }
        return mn_cnt;
    }
};

```

[View on LeetCode](https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/)
