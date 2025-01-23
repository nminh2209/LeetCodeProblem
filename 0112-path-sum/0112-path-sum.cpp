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
    bool hasPathSum(TreeNode* root, int targetSum) {
        return psum(root, targetSum);
    }

private:
    bool psum(TreeNode* node, int targetSum){
        if (!node) return false;
        
        targetSum -= node->val;

        if(!node->left && !node->right) return targetSum == 0;

        return psum(node->left, targetSum) || psum(node->right, targetSum);
        
    }
    
};