/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
    public:
    bool hasCycle(ListNode* head)
    {
        if (head == NULL)
        {
            return false;
        }
        head->val = 100005;
        head = head->next;
        while (head)
        {
            if (head->val == 100005) { return true; }
            head->val = 100005;
            head = head->next;
        }

        return false;
    }
};