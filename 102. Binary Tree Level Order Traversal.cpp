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
    map<int, vector<int>> mp;
    map<int, vector<int>>:: iterator it;

    void traverse(TreeNode* node, int level)
    {
        if (node == NULL) return;

        mp[level].push_back(node->val);
        traverse(node->right, level + 1);
        traverse(node->left, level + 1);
    }

    vector<vector<int>> levelOrder(TreeNode* root)
    {
        traverse(root, 1);
        vector<vector<int>> ans;
        for (it = mp.begin(); it != mp.end(); it++)
        {
            reverse(it->second.begin(), it->second.end());
            ans.push_back(it->second);
        }
        return ans;

    }
};
