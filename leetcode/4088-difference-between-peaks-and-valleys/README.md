# 4088. Difference Between Peaks and Valleys

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen) ![Language](https://img.shields.io/badge/Language-cpp-orange)

## Metadata

| Field | Value |
| --- | --- |
| Runtime | 4 ms |
| Memory | 31.6 MB |
| Submission Date | 2026-10-25T15:05:37.730Z |
| Platform | leetcode |

## Problem Statement

<p>You are given an integer array <code>nums</code> of length <code>n</code>.</p>

<p>An index <code>i</code> is called a <strong>peak</strong> if <strong>all</strong> of the following conditions hold:</p>

<ul>
	<li><code>0 &lt; i &lt; n - 1</code></li>
	<li><code>nums[i] &gt; nums[i - 1]</code></li>
	<li><code>nums[i] &gt; nums[i + 1]</code></li>
</ul>

<p>An index <code>i</code> is called a <strong>valley</strong> if <strong>all</strong> of the following conditions hold:</p>

<ul>
	<li><code>0 &lt; i &lt; n - 1</code></li>
	<li><code>nums[i] &lt; nums[i - 1]</code></li>
	<li><code>nums[i] &lt; nums[i + 1]</code></li>
</ul>

<p>Return an integer denoting the <strong>difference</strong> between the sum of all peak values and the sum of all valley values.</p>

<p>&nbsp;</p>
<p>

## Examples

**Example 1:**

```
</p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,5,2,4,1,3,0]</span></p>

<p><strong>Output:</strong> <span class="example-io">9</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>The peak values are <code>nums[1] = 5</code>, <code>nums[3] = 4</code>, and <code>nums[5] = 3</code>.</li>
	<li>The valley values are <code>nums[2] = 2</code> and <code>nums[4] = 1</code>.</li>
	<li>The difference between the sum of the peak values and the sum of the valley values is <code>(5 + 4 + 3) - (2 + 1) = 9</code>. Hence, the answer is 9.</li>
</ul>
</div>

<p>
```

**Example 2:**

```
</p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [-5,-6,-1,-2,5,3,2]</span></p>

<p><strong>Output:</strong> <span class="example-io">12</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>The peak values are <code>nums[2] = -1</code> and <code>nums[4] = 5</code>.</li>
	<li>The valley values are <code>nums[1] = -6</code> and <code>nums[3] = -2</code>.</li>
	<li>The difference between the sum of the peak values and the sum of the valley values is <code>(-1 + 5) - (-6 + (-2)) = 12</code>. Hence, the answer is 12.</li>
</ul>
</div>

<p>
```

**Example 3:**

```
</p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [6,5,2,5,5,3,6]</span></p>

<p><strong>Output:</strong> <span class="example-io">-5</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>There are no peak values in the array.</li>
	<li>The valley values are <code>nums[2] = 2</code> and <code>nums[5] = 3</code>.</li>
	<li>The difference between the sum of the peak values and the sum of the valley values is <code>(0) - (2 + 3) = -5</code>. Hence, the answer is -5.</li>
</ul>
</div>

<p>&nbsp;</p>
```

## Constraints

- <code>3 &lt;= n == nums.length &lt;= 100</code>
- <code>-100 &lt;= nums[i] &lt;= 100</code>

## Solution

```cpp
class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        vector<int>peak;
        vector<int>valley;
        int peakSum=0;
        int valleySum=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i] > nums[i - 1] && nums[i] > nums[i + 1]){
                peak.push_back(nums[i]);
            }
            if(nums[i] < nums[i - 1] && nums[i] < nums[i + 1]){
                valley.push_back(nums[i]);
            }
        }
        for(auto i:peak){peakSum+=i;}
        for(auto i:valley){valleySum+=i;}
        return peakSum-valleySum;
    }
};
```

[View on LeetCode](https://leetcode.com/problems/difference-between-peaks-and-valleys/)
