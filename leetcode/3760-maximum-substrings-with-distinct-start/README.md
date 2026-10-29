# 3760. Maximum Substrings With Distinct Start

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow) ![Topic](https://img.shields.io/badge/Topic-Hash_Table-blue) ![Topic](https://img.shields.io/badge/Topic-String-blue) ![Language](https://img.shields.io/badge/Language-cpp-orange)

## Metadata

| Field | Value |
| --- | --- |
| Runtime | 28 ms |
| Memory | 25.2 MB |
| Submission Date | 2026-10-29T07:31:12.299Z |
| Platform | leetcode |

## Problem Statement

<p>You are given a string <code>s</code> consisting of lowercase English letters.</p>

<p>Return an integer denoting the <strong>maximum</strong> number of <span data-keyword="substring-nonempty">substrings</span> you can split <code>s</code> into such that each <strong>substring</strong> starts with a <strong>distinct</strong> character (i.e., no two substrings start with the same character).</p>

<p>&nbsp;</p>
<p>

## Examples

**Example 1:**

```
</p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;abab&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">2</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>Split <code>&quot;abab&quot;</code> into <code>&quot;a&quot;</code> and <code>&quot;bab&quot;</code>.</li>
	<li>Each substring starts with a distinct character i.e <code>&#39;a&#39;</code> and <code>&#39;b&#39;</code>. Thus, the answer is 2.</li>
</ul>
</div>

<p>
```

**Example 2:**

```
</p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;abcd&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">4</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>Split <code>&quot;abcd&quot;</code> into <code>&quot;a&quot;</code>, <code>&quot;b&quot;</code>, <code>&quot;c&quot;</code>, and <code>&quot;d&quot;</code>.</li>
	<li>Each substring starts with a distinct character. Thus, the answer is 4.</li>
</ul>
</div>

<p>
```

**Example 3:**

```
</p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;aaaa&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>All characters in <code>&quot;aaaa&quot;</code> are <code>&#39;a&#39;</code>.</li>
	<li>Only one substring can start with <code>&#39;a&#39;</code>. Thus, the answer is 1.</li>
</ul>
</div>

<p>&nbsp;</p>
```

## Constraints

- <code>1 &lt;= s.length &lt;= 10<sup>5</sup></code>
- <code>s</code> consists of lowercase English letters.

## Solution

```cpp
class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        return mp.size();
    }
};
```

[View on LeetCode](https://leetcode.com/problems/maximum-substrings-with-distinct-start/)
