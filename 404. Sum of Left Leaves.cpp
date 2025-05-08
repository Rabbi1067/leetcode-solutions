class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == nullptr) return 0;

        int sum = 0;

        // Check if the left child is a leaf
        if (root->left && !root->left->left && !root->left->right) {
            sum += root->left->val;
        }

        // Recursively sum for left and right subtrees
        sum += sumOfLeftLeaves(root->left);
        sum += sumOfLeftLeaves(root->right);

        return sum;
    }
};
