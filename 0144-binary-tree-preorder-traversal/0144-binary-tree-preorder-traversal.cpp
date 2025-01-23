class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        prod(root, result);
        return result;
    }
private:
    void prod(TreeNode* node, vector<int>& result) {
        if (!node) return; 

        result.push_back(node->val); 
        prod(node->left, result);   
        prod(node->right, result);  
    }
};
