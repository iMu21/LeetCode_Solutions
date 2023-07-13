# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution :
    def findTarget(self, root: Optional[TreeNode], k: int) -> bool:
        l =[]
        def TreeTraverse(node:Optional[TreeNode]):
            l.append(node.val)
            if node.right:
                TreeTraverse(node.right)
            if node.left:
                TreeTraverse(node.left)
        TreeTraverse(root)
        pointer1 = 0
        pointer2 = len(l) - 1
        l = sorted(l)
        while l[pointer1] + l[pointer2] != k and pointer1!= pointer2:
            if l[pointer1] + l[pointer2] > k:
                pointer2 -= 1
            else:
                pointer1 += 1
        return l[pointer1] + l[pointer2] == k and pointer1!=pointer2