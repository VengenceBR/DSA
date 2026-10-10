class Solution
{
public:
    ListNode *removeNodes(ListNode *head)
    {
        ListNode *cn = head;
        ListNode *prev = NULL;
        ListNode *next;
        if (head == NULL)
        {
            return head;
        }
        while (cn != NULL)
        {
            next = cn->next;
            cn->next = prev;
            prev = cn;
            cn = next;
        }
        head = prev;
        ListNode *max = head;
        cn = head->next;
        prev = head;
        ListNode *temp;
        while (cn != NULL)
        {
            if (max->val > cn->val)
            {
                prev->next = cn->next;
                cn = cn->next;
            }
            else
            {
                max = cn;
                prev = cn;
                cn = cn->next;
            }
        }
        cn = head;
        prev = NULL;
        while (cn != NULL)
        {
            next = cn->next;
            cn->next = prev;
            prev = cn;
            cn = next;
        }
        head = prev;
        return head;
    }
};