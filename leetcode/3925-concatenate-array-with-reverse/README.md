# 3925. Concatenate Array With Reverse

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen) ![Topic](https://img.shields.io/badge/Topic-Array-blue) ![Topic](https://img.shields.io/badge/Topic-Simulation-blue) ![Language](https://img.shields.io/badge/Language-cpp-orange)

## Metadata

| Field | Value |
| --- | --- |
| Runtime | 0 ms |
| Memory | 31 MB |
| Submission Date | 2026-10-28T19:15:06.270Z |
| Platform | leetcode |

## Problem Statement

<p>You are given an integer array <code>nums</code> of length <code>n</code>.</p>

<p>Construct a new array <code>ans</code> of length <code>2 * n</code> such that the first <code>n</code> elements are the same as <code>nums</code>, and the next <code>n</code> elements are the elements of <code>nums</code> in reverse order.</p>

<p>Formally, for <code>0 &lt;= i &lt;= n - 1</code>:</p>

<ul>
	<li><code>ans[i] = nums[i]</code></li>
	<li><code>ans[i + n] = nums[n - i - 1]</code></li>
</ul>

<p>Return an integer array <code>ans</code>.</p>

<p>&nbsp;</p>
<p>

## Examples

**Example 1:**

```
</p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,3]</span></p>

<p><strong>Output:</strong> <span class="example-io">[1,2,3,3,2,1]</span></p>

<p><strong>Explanation:</strong></p>

<p>The first <code>n</code> elements of <code>ans</code> are the same as <code>nums</code>.</p>

<p>For the next <code>n = 3</code> elements, each element is taken from <code>nums</code> in reverse order:</p>

<ul>
	<li><code>ans[3] = nums[2] = 3</code></li>
	<li><code>ans[4] = nums[1] = 2</code></li>
	<li><code>ans[5] = nums[0] = 1</code></li>
</ul>

<p>Thus, <code>ans = [1, 2, 3, 3, 2, 1]</code>.</p>
</div>

<p>
```

**Example 2:**

```
</p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1]</span></p>

<p><strong>Output:</strong> <span class="example-io">[1,1]</span></p>

<p><strong>Explanation:</strong></p>

<p>The array remains the same when reversed. Thus, <code>ans = [1, 1]</code>.</p>
</div>

<p>&nbsp;</p>
```

## Constraints

- <code>1 &lt;= nums.length &lt;= 100</code>
- <code>1 &lt;= nums[i] &lt;= 100</code>

## Solution

```cpp
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>temp=nums;
        reverse(temp.begin(),temp.end());
        for(auto i:temp){
            nums.push_back(i);
        }
        return nums;
    }
};
```

[View on LeetCode](https://leetcode.com/problems/concatenate-array-with-reverse/)
