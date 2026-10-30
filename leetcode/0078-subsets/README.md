# 78. Subsets

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow) ![Topic](https://img.shields.io/badge/Topic-Array-blue) ![Topic](https://img.shields.io/badge/Topic-Backtracking-blue) ![Topic](https://img.shields.io/badge/Topic-Bit_Manipulation-blue) ![Language](https://img.shields.io/badge/Language-cpp-orange)

## Metadata

| Field | Value |
| --- | --- |
| Runtime | 2 ms |
| Memory | 10 MB |
| Submission Date | 2026-10-30T11:43:27.326Z |
| Platform | leetcode |

## Problem Statement

<p>Given an integer array <code>nums</code> of <strong>unique</strong> elements, return <em>all possible</em> <span data-keyword="subset"><em>subsets</em></span> <em>(the power set)</em>.</p>

<p>The solution set <strong>must not</strong> contain duplicate subsets. Return the solution in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p>

## Examples

**Example 1:**

```
</p>

<pre>
<strong>Input:</strong> nums = [1,2,3]
<strong>Output:</strong> [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
</pre>

<p>
```

**Example 2:**

```
</p>

<pre>
<strong>Input:</strong> nums = [0]
<strong>Output:</strong> [[],[0]]
</pre>

<p>&nbsp;</p>
```

## Constraints

- <code>1 &lt;= nums.length &lt;= 10</code>
- <code>-10 &lt;= nums[i] &lt;= 10</code>
- All the numbers of&nbsp;<code>nums</code> are <strong>unique</strong>.

## Solution

```cpp
class Solution {
public:
    void solve(vector<int>& nums,vector<int>&ans,int i,vector<vector<int>>&allSubsets){
        if(i==nums.size()){
            allSubsets.push_back({ans});
            return;
        } 
        ans.push_back(nums[i]);
        solve(nums,ans,i+1,allSubsets);
        ans.pop_back();
        solve(nums,ans,i+1,allSubsets);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>allSubsets;
        vector<int>ans;
        int i=0;
        solve(nums,ans,i,allSubsets);
        return allSubsets;
    }
};
```

[View on LeetCode](https://leetcode.com/problems/subsets/)
