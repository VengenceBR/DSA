class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        int c = 0, i = 0;
        ListNode *mn = head;
        ListNode *temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
            c++;
        }
        while (i < c / 2)
        {
            mn = mn->next;
            i++;
        }
        return mn;
    }
};