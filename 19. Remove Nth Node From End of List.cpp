/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
    public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode* cur = head;
        ListNode* prev = NULL;
        int cnt = 0;
        while (cur)
        {
            cnt++;
            cur = cur->next;
        }
        n = cnt - n + 1;
        cnt = 0;
        cur = head;
        if (n == 1)
        {
            return head->next;
        }
        //cout<<n<<" "<<cur->val<<endl;
        while (cnt != n - 1)
        {
            prev = cur;
            cur = cur->next;
            cnt++;
        }
        prev->next = cur->next;

        return head;

    }
};