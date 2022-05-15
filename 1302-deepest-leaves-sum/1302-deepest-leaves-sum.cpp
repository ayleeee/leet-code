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
    int ans = 0;
    int hg = 0;
    
    int heightCal(TreeNode* root){
        if(!root) return 0;
        return 1+max(heightCal(root->left),heightCal(root->right));
    }
    
    void helper(TreeNode* root, int depth){
        if(!root) return;
        if(depth==hg-1) ans+=root->val;
        
        helper(root->right,depth+1);
        helper(root->left,depth+1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        hg = heightCal(root);
        helper(root,0);
        return ans;
    }
};