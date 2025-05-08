class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
         if (root == NULL)
        return 0;
    int subSum = targetSum - root->val;
    if (subSum == 0 && root->left == nullptr && root->right == nullptr)
        return 1;
    bool left = 0, right = 0;
    
    if (root->left)
        left = hasPathSum(root->left, subSum);
    if (root->right)
        right = hasPathSum(root->right, subSum);

    return left || right;
    }
};
