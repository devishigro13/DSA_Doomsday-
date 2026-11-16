# 257. Binary Tree Paths

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen) ![Topic](https://img.shields.io/badge/Topic-String-blue) ![Topic](https://img.shields.io/badge/Topic-Backtracking-blue) ![Topic](https://img.shields.io/badge/Topic-Tree-blue) ![Topic](https://img.shields.io/badge/Topic-Depth--First_Search-blue) ![Topic](https://img.shields.io/badge/Topic-Binary_Tree-blue) ![Language](https://img.shields.io/badge/Language-cpp-orange)

## Metadata

| Field | Value |
| --- | --- |
| Runtime | 1 ms |
| Memory | 18.8 MB |
| Submission Date | 2026-11-16T18:57:22.755Z |
| Platform | leetcode |

## Problem Statement

<p>You are given the <code>root</code> of a binary tree.</p>

<p>Return all <strong>root-to-leaf</strong> paths<em> </em>in <strong>any order</strong>.</p>

<p>A <strong>leaf</strong> is a node with no children.</p>

<p>&nbsp;</p>
<p>

## Examples

**Example 1:**

```
</p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/12/paths-tree.jpg" style="width: 207px; height: 293px;" />
<pre>
<strong>Input:</strong> root = [1,2,3,null,5]
<strong>Output:</strong> [&quot;1-&gt;2-&gt;5&quot;,&quot;1-&gt;3&quot;]
</pre>

<p>
```

**Example 2:**

```
</p>

<pre>
<strong>Input:</strong> root = [1]
<strong>Output:</strong> [&quot;1&quot;]
</pre>

<p>&nbsp;</p>
```

## Constraints

- The number of nodes in the tree is in the range <code>[1, 100]</code>.
- <code>-100 &lt;= Node.val &lt;= 100</code>

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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        if(root==nullptr) return ans;
        if(root->left==nullptr && root->right==nullptr){
            ans.push_back(to_string(root->val));
            return ans;
        }
        vector<string> left=binaryTreePaths(root->left);
        vector<string> right=binaryTreePaths(root->right);
        for(string s:left) ans.push_back(to_string(root->val)+"->"+s);
        for(string s:right) ans.push_back(to_string(root->val)+"->"+s);
        return ans;
    }
};

```

[View on LeetCode](https://leetcode.com/problems/binary-tree-paths/)
