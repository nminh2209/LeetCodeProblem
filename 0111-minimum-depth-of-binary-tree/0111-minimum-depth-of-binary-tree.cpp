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
    int minDepth(TreeNode* root) {
            return mind(root);
    }
private:
    int mind(TreeNode* node){
        if(!node) return 0;
        
        int leftDepth = mind(node->left);
        int rightDepth = mind(node->right);

        if (!node->left) return 1 + rightDepth;
        if (!node->right) return 1 + leftDepth;

         return 1 + min(leftDepth, rightDepth);

    }


};