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
class Solution
{
    public:
    int ans = 0;

    void Traverse(TreeNode* node, int depth)
    {
        if (node == NULL)
        {
            return;
        }
        ans = max(ans, depth);
        Traverse(node->right, depth + 1);
        Traverse(node->left, depth + 1);
    }

    int maxDepth(TreeNode* root)
    {
        Traverse(root, 1);
        return ans;
    }
};