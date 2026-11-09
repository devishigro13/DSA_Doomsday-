// Runtime: 0 ms
// Memory: 12.8 MB

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr && q==nullptr) return true;
        if(p==nullptr || q==nullptr) return false;
        if(p->left==nullptr && q->left!=nullptr || q->left==nullptr && p->left!=nullptr) return false;
        if(p->right==nullptr && q->right!=nullptr || q->right==nullptr && p->right!=nullptr) return false;
        return p->val==q->val && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }   
};
