class Solution {
public:
    int maxDepth(Node* root) {
        if (root == nullptr)
            return 0;

        int maxChildDepth = 0;
        for (Node* child : root->children) {
            maxChildDepth = max(maxChildDepth, maxDepth(child));
        }

        return maxChildDepth + 1;
    }
};
