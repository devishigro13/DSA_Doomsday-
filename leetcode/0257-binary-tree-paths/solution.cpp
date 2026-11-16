// Runtime: 1 ms
// Memory: 18.8 MB

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
