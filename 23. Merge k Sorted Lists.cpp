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
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        map<int, vector<ListNode*>> mp;
        map<int, vector<ListNode*>> :: iterator it;
        for (int i = 0; i < lists.size(); i++)
        {
            while (lists[i])
            {
                mp[lists[i]->val].push_back(lists[i]);
                lists[i] = lists[i]->next;
            }
        }
        if (mp.size() == 0)
        {
            return NULL;
        }
        it = mp.begin();
        ListNode* head;
        ListNode* cur;
        bool flag = 1;
        for (it = mp.begin(); it != mp.end(); it++)
        {
            for (int i = 0; i < it->second.size(); i++)
            {
                if (flag)
                {
                    head = it->second[i];
                    cur = it->second[i];
                    flag = 0;
                }
                else
                {
                    cur->next = it->second[i];
                    cur = cur->next;
                }
            }
        }

        return head;
    }
};