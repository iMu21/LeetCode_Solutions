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
    vector<TreeNode*> v;

    void traverseForMatch(TreeNode* root, TreeNode* subRoot)
    {
        if (root == NULL)
        {
            return;
        }
        if (root->val == subRoot->val)
        {
            v.push_back(root);
        }
        traverseForMatch(root->left, subRoot);
        traverseForMatch(root->right, subRoot);
    }

    bool check(TreeNode* root, TreeNode* subRoot)
    {
        if (root == NULL && subRoot == NULL)
        {
            return true;
        }
        else if (root == NULL || subRoot == NULL)
        {
            return false;
        }
        else if (root->val == subRoot->val)
        {
            return check(root->right, subRoot->right) && check(root->left, subRoot->left);
        }
        else
        {
            return false;
        }
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot)
    {
        traverseForMatch(root, subRoot);
        bool ans = false;
        for (int i = 0; i < v.size(); i++)
        {
            ans = ans || check(v[i], subRoot);
        }
        return ans;
    }
};