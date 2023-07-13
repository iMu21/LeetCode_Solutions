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
    int mx = -INT_MAX;
    int traverse(TreeNode* node)
    {
        if (node == NULL)
        {
            return 0;
        }
        int sm = node->val;
        int lf = traverse(node->left);
        int rt = traverse(node->right);

        vector<int> v;
        v.push_back(sm);
        v.push_back(sm + lf);
        v.push_back(sm + rt);
        v.push_back(sm + rt + lf);
        sort(v.rbegin(), v.rend());
        mx = max(mx, v[0]);
        return max(sm + max(0, lf), sm + max(0, rt));
    }

    int maxPathSum(TreeNode* root)
    {
        mx = root->val;
        traverse(root);
        return mx;
    }
};