class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *curr = head;
        while (curr != NULL && curr->next != NULL) {
            if (curr->val == curr->next->val) {
                ListNode *next_next = curr->next->next;
                delete curr->next; // Optional: free memory of the duplicate node
                curr->next = next_next;
            } else {
                curr = curr->next;
            }
        }
        return head;
    }
};
