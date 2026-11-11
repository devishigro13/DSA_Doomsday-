# 4106. Find Mismatched Segments Between Two Strings

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow) ![Language](https://img.shields.io/badge/Language-cpp-orange)

## Metadata

| Field | Value |
| --- | --- |
| Runtime | 1 ms |
| Memory | 13.1 MB |
| Submission Date | 2026-11-11T18:50:04.151Z |
| Platform | leetcode |

## Problem Statement

<p>You are given two strings <code>s1</code> and <code>s2</code> of the same length.</p>

<p>A <strong>mismatched segment</strong> is a <strong>maximal contiguous</strong> range of indices where the characters of <code>s1</code> and <code>s2</code> differ at every index.</p>

<p>Return a 2D array containing <code>[sub1, sub2]</code> for each mismatched segment, where <code>sub1</code> and <code>sub2</code> are the corresponding <strong><span data-keyword="substring-nonempty">substrings</span></strong> from <code>s1</code> and <code>s2</code>, respectively. Return the segments in <strong>increasing</strong> order of their starting indices. If there are no mismatched segments, return an empty array.</p>

<p>&nbsp;</p>
<p>

## Examples

**Example 1:**

```
</p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s1 = &quot;earth&quot;, s2 = &quot;empty&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">[[&quot;ar&quot;,&quot;mp&quot;],[&quot;h&quot;,&quot;y&quot;]]</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>The characters at indices 1 and 2 differ, forming the mismatched segment <code>[&quot;ar&quot;,&quot;mp&quot;]</code>.</li>
	<li>The characters at index 4 differ, forming the mismatched segment <code>[&quot;h&quot;,&quot;y&quot;]</code>.</li>
</ul>
</div>

<p>
```

**Example 2:**

```
</p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s1 = &quot;action&quot;, s2 = &quot;nation&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">[[&quot;ac&quot;,&quot;na&quot;]]</span></p>

<p><strong>Explanation:</strong></p>

<p>The characters at indices 0 and 1 differ, forming the mismatched segment <code>[&quot;ac&quot;,&quot;na&quot;]</code>. All remaining characters are equal in both strings.</p>
</div>

<p>
```

**Example 3:**

```
</p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s1 = &quot;hot&quot;, s2 = &quot;hot&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">[]</span></p>

<p><strong>Explanation:</strong></p>

<p>The two strings are identical, so there are no mismatched segments.</p>
</div>

<p>&nbsp;</p>
```

## Constraints

- <code>1 &lt;= s1.length == s2.length &lt;= 100</code>
- <code>s1</code> and <code>s2</code> consist of lowercase English letters.

## Solution

```cpp
class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>>ans;
        string t1,t2;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                t1+=s1[i];
                t2+=s2[i];
                continue;
            }
            if(t1!=""){
                ans.push_back ({t1,t2});
                t1="",t2="";
            }
        }
        if(t1!=""){
                ans.push_back ({t1,t2});
        }
        return ans;
    }
};


```

[View on LeetCode](https://leetcode.com/problems/find-mismatched-segments-between-two-strings/)
