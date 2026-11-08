# 110. Balanced Binary Tree

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen) ![Topic](https://img.shields.io/badge/Topic-Tree-blue) ![Topic](https://img.shields.io/badge/Topic-Depth--First_Search-blue) ![Topic](https://img.shields.io/badge/Topic-Binary_Tree-blue) ![Language](https://img.shields.io/badge/Language-cpp-orange)

## Metadata

| Field | Value |
| --- | --- |
| Runtime | 0 ms |
| Memory | 22.9 MB |
| Submission Date | 2026-11-08T14:16:52.733Z |
| Platform | leetcode |

## Problem Statement

<p>Given a binary tree, determine if it is <span data-keyword="height-balanced"><strong>height-balanced</strong></span>.</p>

<p>&nbsp;</p>
<p>

## Examples

**Example 1:**

```
</p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/06/balance_1.jpg" style="width: 342px; height: 221px;" />
<pre>
<strong>Input:</strong> root = [3,9,20,null,null,15,7]
<strong>Output:</strong> true
</pre>

<p>
```

**Example 2:**

```
</p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/06/balance_2.jpg" style="width: 452px; height: 301px;" />
<pre>
<strong>Input:</strong> root = [1,2,2,3,3,null,null,4,4]
<strong>Output:</strong> false
</pre>

<p>
```

**Example 3:**

```
</p>

<pre>
<strong>Input:</strong> root = []
<strong>Output:</strong> true
</pre>

<p>&nbsp;</p>
```

## Constraints

- The number of nodes in the tree is in the range <code>[0, 5000]</code>.
- <code>-10<sup>4</sup> &lt;= Node.val &lt;= 10<sup>4</sup></code>

## Solution

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int check(TreeNode* root){
        if(root==NULL) return 0;
        int lh=check(root->left);
        if(lh==-1) return -1;
        int rh=check(root->right);
        if(rh==-1) return -1;
        if(abs(lh-rh)>1) return -1;
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        return check(root)!=-1;
    }
};
```

[View on LeetCode](https://leetcode.com/problems/balanced-binary-tree/)
