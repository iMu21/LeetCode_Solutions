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
    void TreeExchange(TreeNode* node)
    {
        if (node == NULL)
        {
            return;
        }
        TreeExchange(node->right);
        TreeExchange(node->left);
        TreeNode* cur = node->right;
        node->right = node->left;
        node->left = cur;
    }
    TreeNode* invertTree(TreeNode* root)
    {
        TreeExchange(root);
        return root;
    }
};