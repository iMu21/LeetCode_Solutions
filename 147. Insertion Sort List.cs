public class Solution
{
    public ListNode InsertionSortList(ListNode head)
    {
        if (head == null || head.next == null)
        {
            return head;
        }
        ListNode dummy = new ListNode(0); 
        ListNode cur = head;
        ListNode prev = dummy;
        ListNode next = null;

        while (cur != null)
        {
            next = cur.next; 
            while (prev.next != null && prev.next.val < cur.val)
            {
                prev = prev.next;
            }
            cur.next = prev.next;
            prev.next = cur;
            prev = dummy; 
            cur = next; 
        }
        return dummy.next;
    }
}
