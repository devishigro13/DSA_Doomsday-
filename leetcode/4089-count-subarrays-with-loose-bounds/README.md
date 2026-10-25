# 4089. Count Subarrays With Loose Bounds

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow) ![Language](https://img.shields.io/badge/Language-cpp-orange)

## Metadata

| Field | Value |
| --- | --- |
| Runtime | 10 ms |
| Memory | 312.8 MB |
| Submission Date | 2026-10-25T19:20:55.663Z |
| Platform | leetcode |

## Problem Statement

<p>You are given an integer array <code>nums</code> and two integers <code>minK</code> and <code>maxK</code>.</p>

<p>A <strong>loose-bound subarray</strong> is a <strong>subarray</strong> in which every element is <strong>greater than or equal to</strong> <code>minK</code> and <strong>less than or equal to</strong> <code>maxK</code>.</p>

<p>Return the <strong>number</strong> of loose-bound subarrays in <code>nums</code>.</p>

<p>A <strong>subarray</strong> is a contiguous <strong>non-empty</strong> sequence of elements within an array.</p>

<p>&nbsp;</p>
<p>

## Examples

**Example 1:**

```
</p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,4,7,3], minK = 1, maxK = 5</span></p>

<p><strong>Output:</strong> <span class="example-io">4</span></p>

<p><strong>Explanation:</strong></p>

<p>The loose-bound subarrays are <code>[1]</code>, <code>[4]</code>, <code>[3]</code>, and <code>[1, 4]</code>. The minimum value in these subarrays is at least <code>minK = 1</code> and the maximum value is at most <code>maxK = 5</code>.</p>
</div>

<p>
```

**Example 2:**

```
</p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,1], minK = 1, maxK = 1</span></p>

<p><strong>Output:</strong> <span class="example-io">3</span></p>

<p><strong>Explanation:</strong></p>

<p>The loose-bound subarrays are <code>[1]</code>, <code>[1]</code>, and <code>[1, 1]</code>. The minimum value in these subarrays is at least <code>minK = 1</code> and the maximum value is at most <code>maxK = 1</code>.</p>
</div>

<p>&nbsp;</p>
```

## Constraints

- <code>2 &lt;= nums.length &lt;= 10<sup>5</sup></code>
- <code>1 &lt;= nums[i], minK, maxK &lt;= 10<sup>6</sup></code>

## Solution

```cpp
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int left=0;
        long long ans=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]>maxK || nums[right]<minK){
                left=right+1;
            }
            ans+=right-left+1;
        }
        return ans;
    }
};
```

[View on LeetCode](https://leetcode.com/problems/count-subarrays-with-loose-bounds/)
