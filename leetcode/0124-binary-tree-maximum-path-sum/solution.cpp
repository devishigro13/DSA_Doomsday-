// Runtime: 0 ms
// Memory: 27.9 MB

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
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        height(root,maxi);
        return maxi;
    }
    int height(TreeNode* node, int &maxi){
        if(node==NULL) return 0;
        int lh=max(0,height(node->left,maxi)); // so if it's a negative->return 0 instead
        int rh=max(0,height(node->right,maxi));
        maxi=max(maxi,lh+rh+node->val);
        return (node->val)+max(lh,rh);
    }
};