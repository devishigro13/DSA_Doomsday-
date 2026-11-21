// Runtime: 0 ms
// Memory: 19.7 MB

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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==nullptr) return 0;
        queue<pair<TreeNode*,long long>>q;
        long long ans=INT_MIN;
        q.push({root,0});
        while(!q.empty()){
            long long size=q.size();
            long long mn=q.front().second;
            long long first=0,last=0;
            for(long long i=0;i<size;i++){
                auto [node,idx]=q.front();
                q.pop();
                long long curr=idx-mn;
                if(i==0) first=curr;
                if(i==size-1) last=curr;
                if(node->left){
                    q.push({node->left,2*curr+1});
                }
                if(node->right){
                    q.push({node->right,2*curr+2});
                }
            }
            ans=max(ans,last-first+1);
        }
        return ans;
    }
};