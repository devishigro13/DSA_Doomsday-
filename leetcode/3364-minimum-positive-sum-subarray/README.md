# 3364. Minimum Positive Sum Subarray 

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen) ![Topic](https://img.shields.io/badge/Topic-Array-blue) ![Topic](https://img.shields.io/badge/Topic-Sliding_Window-blue) ![Topic](https://img.shields.io/badge/Topic-Prefix_Sum-blue) ![Language](https://img.shields.io/badge/Language-cpp-orange)

## Metadata

| Field | Value |
| --- | --- |
| Runtime | 3 ms |
| Memory | 30.2 MB |
| Submission Date | 2026-11-14T14:51:29.122Z |
| Platform | leetcode |

## Problem Statement

<p>You are given an integer array <code>nums</code> and <strong>two</strong> integers <code>l</code> and <code>r</code>. Your task is to find the <strong>minimum</strong> sum of a <strong>subarray</strong> whose size is between <code>l</code> and <code>r</code> (inclusive) and whose sum is greater than 0.</p>

<p>Return the <strong>minimum</strong> sum of such a subarray. If no such subarray exists, return -1.</p>

<p>A <strong>subarray</strong> is a contiguous <b>non-empty</b> sequence of elements within an array.</p>

<p>&nbsp;</p>
<p>

## Examples

**Example 1:**

```
</p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [3, -2, 1, 4], l = 2, r = 3</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>

<p><strong>Explanation:</strong></p>

<p>The subarrays of length between <code>l = 2</code> and <code>r = 3</code> where the sum is greater than 0 are:</p>

<ul>
	<li><code>[3, -2]</code> with a sum of 1</li>
	<li><code>[1, 4]</code> with a sum of 5</li>
	<li><code>[3, -2, 1]</code> with a sum of 2</li>
	<li><code>[-2, 1, 4]</code> with a sum of 3</li>
</ul>

<p>Out of these, the subarray <code>[3, -2]</code> has a sum of 1, which is the smallest positive sum. Hence, the answer is 1.</p>
</div>

<p>
```

**Example 2:**

```
</p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [-2, 2, -3, 1], l = 2, r = 3</span></p>

<p><strong>Output:</strong> <span class="example-io">-1</span></p>

<p><strong>Explanation:</strong></p>

<p>There is no subarray of length between <code>l</code> and <code>r</code> that has a sum greater than 0. So, the answer is -1.</p>
</div>

<p>
```

**Example 3:**

```
</p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1, 2, 3, 4], l = 2, r = 4</span></p>

<p><strong>Output:</strong> <span class="example-io">3</span></p>

<p><strong>Explanation:</strong></p>

<p>The subarray <code>[1, 2]</code> has a length of 2 and the minimum sum greater than 0. So, the answer is 3.</p>
</div>

<p>&nbsp;</p>
```

## Constraints

- <code>1 &lt;= nums.length &lt;= 100</code>
- <code>1 &lt;= l &lt;= r &lt;= nums.length</code>
- <code>-1000 &lt;= nums[i] &lt;= 1000</code>

## Solution

```cpp
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        vector<int>a(n+1,0);
        for(int i=1;i<=n;i++){
            a[i]=a[i-1]+nums[i-1];
        }
        int mn=INT_MAX;
        for(int i=l;i<=n;i++){
            for(int j=max(0,i-r);j<=i-l;j++){
                int sum=a[i]-a[j];
                if(sum>0) mn=min(mn,sum);
            }
        }
        if (mn==INT_MAX) return -1;
        return mn;
    }
};
```

[View on LeetCode](https://leetcode.com/problems/minimum-positive-sum-subarray/)
