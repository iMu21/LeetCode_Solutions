public class Solution
{
    public int SumNumbers(TreeNode root)
    {
        return SumNumbers(root, 0);
    }

    public int SumNumbers(TreeNode root, int prev)
    {
        var lf = 0;
        var rt = 0;
        if (root.left != null)
        {
            lf = SumNumbers(root.left, prev * 10 + root.val);
        }
        if (root.right != null)
        {
            rt = SumNumbers(root.right, prev * 10 + root.val);
        }

        if (root.right == null && root.left == null)
        {
            return root.val + prev * 10;
        }

        if (root.right != null && root.left == null)
        {
            return rt;
        }

        if (root.right == null && root.left != null)
        {
            return lf;
        }

        return lf + rt;
    }
}
