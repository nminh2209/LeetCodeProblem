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
    int maxDepth(TreeNode* root) {
        return maxd(root);
    }
private:
    int maxd(TreeNode* node){
        if(!node) return 0;
        
        int leftDepth = maxd(node->left);
        int rightDepth = maxd(node->right);

        return max(leftDepth, rightDepth) + 1;
    }

};