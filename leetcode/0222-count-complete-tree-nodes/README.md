# 222. Count Complete Tree Nodes

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow) ![Topic](https://img.shields.io/badge/Topic-Binary_Search-blue) ![Topic](https://img.shields.io/badge/Topic-Bit_Manipulation-blue) ![Topic](https://img.shields.io/badge/Topic-Tree-blue) ![Topic](https://img.shields.io/badge/Topic-Binary_Tree-blue) ![Language](https://img.shields.io/badge/Language-cpp-orange)

## Metadata

| Field | Value |
| --- | --- |
| Runtime | 0 ms |
| Memory | 31.4 MB |
| Submission Date | 2026-11-21T13:38:23.387Z |
| Platform | leetcode |

## Problem Statement

<p>Given the <code>root</code> of a <strong>complete</strong> binary tree, return the number of the nodes in the tree.</p>

<p>According to <strong><a href="http://en.wikipedia.org/wiki/Binary_tree#Types_of_binary_trees" target="_blank">Wikipedia</a></strong>, every level, except possibly the last, is completely filled in a complete binary tree, and all nodes in the last level are as far left as possible. It can have between <code>1</code> and <code>2<sup>h</sup></code> nodes inclusive at the last level <code>h</code>.</p>

<p>Design an algorithm that runs in less than&nbsp;<code data-stringify-type="code">O(n)</code>&nbsp;time complexity.</p>

<p>&nbsp;</p>
<p>

## Examples

**Example 1:**

```
</p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/14/complete.jpg" style="width: 372px; height: 302px;" />
<pre>
<strong>Input:</strong> root = [1,2,3,4,5,6]
<strong>Output:</strong> 6
</pre>

<p>
```

**Example 2:**

```
</p>

<pre>
<strong>Input:</strong> root = []
<strong>Output:</strong> 0
</pre>

<p>
```

**Example 3:**

```
</p>

<pre>
<strong>Input:</strong> root = [1]
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
```

## Constraints

- The number of nodes in the tree is in the range <code>[0, 5 * 10<sup>4</sup>]</code>.
- <code>0 &lt;= Node.val &lt;= 5 * 10<sup>4</sup></code>
- The tree is guaranteed to be <strong>complete</strong>.

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
    int countNodes(TreeNode* root) {
        if(root==nullptr) return 0;
        int lh=leftHeight(root);
        int rh=rightHeight(root);
        if(lh==rh) return pow(2,lh)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
    int leftHeight(TreeNode* node){
        int h=0;
        while(node){
            h++;
            node=node->left;
        }
        return h;
    }
    int rightHeight(TreeNode* node){
        int h=0;
        while(node){
            h++;
            node=node->right;
        }
        return h;
    }
};
```

[View on LeetCode](https://leetcode.com/problems/count-complete-tree-nodes/)
