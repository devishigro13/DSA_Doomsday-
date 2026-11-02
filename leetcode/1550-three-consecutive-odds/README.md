# 1550. Three Consecutive Odds

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen) ![Topic](https://img.shields.io/badge/Topic-Array-blue) ![Language](https://img.shields.io/badge/Language-cpp-orange)

## Metadata

| Field | Value |
| --- | --- |
| Runtime | 0 ms |
| Memory | 11.8 MB |
| Submission Date | 2026-11-02T05:25:54.263Z |
| Platform | leetcode |

## Problem Statement

Given an integer array <code>arr</code>, return <code>true</code>&nbsp;if there are three consecutive odd numbers in the array. Otherwise, return&nbsp;<code>false</code>.
<p>&nbsp;</p>
<p>

## Examples

**Example 1:**

```
</p>

<pre>
<strong>Input:</strong> arr = [2,6,4,1]
<strong>Output:</strong> false
<b>Explanation:</b> There are no three consecutive odds.
</pre>

<p>
```

**Example 2:**

```
</p>

<pre>
<strong>Input:</strong> arr = [1,2,34,3,4,5,7,23,12]
<strong>Output:</strong> true
<b>Explanation:</b> [5,7,23] are three consecutive odds.
</pre>

<p>&nbsp;</p>
```

## Constraints

- <code>1 &lt;= arr.length &lt;= 1000</code>
- <code>1 &lt;= arr[i] &lt;= 1000</code>

## Solution

```cpp
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if (arr.size()<3) return false;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i-1]%2!=0) return true;
        }
        return false;
    }
};
```

[View on LeetCode](https://leetcode.com/problems/three-consecutive-odds/)
