class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    ListNode* cn = head;
    ListNode* prev = NULL;
    ListNode* next;
    while (cn != NULL){
        next = cn->next;
        cn->next = prev;
        prev = cn;
        cn = next;
    }
    return prev;
}
};