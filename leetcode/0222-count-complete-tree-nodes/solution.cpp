// Runtime: 0 ms
// Memory: 31.4 MB

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