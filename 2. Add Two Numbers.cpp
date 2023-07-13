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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* cur = nullptr;
        ListNode* result = nullptr;
        int carry = 0;
        while (carry || l1 != nullptr || l2 != nullptr)
        {
            carry += (l1 == nullptr ? 0 : l1->val) + (l2 == nullptr ? 0 : l2->val);
            auto temp = new ListNode(carry % 10);
            carry /= 10;
            if (result == nullptr)
            {
                result = temp;
                cur = temp;
            }
            else
            {
                cur->next = temp;
                cur = cur->next;
            }
            if (l1 != nullptr)
            {
                l1 = l1->next;
            }
            if (l2 != nullptr)
            {
                l2 = l2->next;
            }
        }
        return result;
    }
};
