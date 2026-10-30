# 704. Binary Search

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen) ![Topic](https://img.shields.io/badge/Topic-Array-blue) ![Topic](https://img.shields.io/badge/Topic-Binary_Search-blue) ![Language](https://img.shields.io/badge/Language-cpp-orange)

## Metadata

| Field | Value |
| --- | --- |
| Runtime | 0 ms |
| Memory | 31.3 MB |
| Submission Date | 2026-10-30T09:59:54.094Z |
| Platform | leetcode |

## Problem Statement

<p>Given an array of integers <code>nums</code> which is sorted in ascending order, and an integer <code>target</code>, write a function to search <code>target</code> in <code>nums</code>. If <code>target</code> exists, then return its index. Otherwise, return <code>-1</code>.</p>

<p>You must write an algorithm with <code>O(log n)</code> runtime complexity.</p>

<p>&nbsp;</p>
<p>

## Examples

**Example 1:**

```
</p>

<pre>
<strong>Input:</strong> nums = [-1,0,3,5,9,12], target = 9
<strong>Output:</strong> 4
<strong>Explanation:</strong> 9 exists in nums and its index is 4
</pre>

<p>
```

**Example 2:**

```
</p>

<pre>
<strong>Input:</strong> nums = [-1,0,3,5,9,12], target = 2
<strong>Output:</strong> -1
<strong>Explanation:</strong> 2 does not exist in nums so return -1
</pre>

<p>&nbsp;</p>
```

## Constraints

- <code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code>
- <code>-10<sup>4</sup> &lt; nums[i], target &lt; 10<sup>4</sup></code>
- All the integers in <code>nums</code> are <strong>unique</strong>.
- <code>nums</code> is sorted in ascending order.

## Solution

```cpp
class Solution {
public:
    int binSearch(vector<int>& arr, int target,int start,int end){
        if (start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==target) {
                return mid;
            }else if(arr[mid]<=target){
                return binSearch(arr,target,mid+1,end);
            }else{
                return binSearch(arr,target,start,mid-1);
            }
        }
        return -1;
    }
    int search(vector<int>& arr, int target) {
        int start=0,end=arr.size()-1;
        return binSearch(arr,target,start,end);   
    }
};
```

[View on LeetCode](https://leetcode.com/problems/binary-search/)
