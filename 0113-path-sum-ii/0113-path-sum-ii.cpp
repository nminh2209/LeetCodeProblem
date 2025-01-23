#include <vector>
#include <functional>
using namespace std;
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> allPath;
        vector<int> currentPath;
        function<void(TreeNode*, int)> deepfirstsearch = [&](TreeNode* node, int remainingSum) {
            if (!node) return;
            currentPath.emplace_back(node->val);
            remainingSum -= node->val;
            if (!node->left && !node->right && remainingSum == 0) {
                allPath.emplace_back(currentPath);
            }
            deepfirstsearch(node->left, remainingSum);
            deepfirstsearch(node->right, remainingSum);
            currentPath.pop_back();
        };
        deepfirstsearch(root, targetSum);
        return allPath;
    }
};
