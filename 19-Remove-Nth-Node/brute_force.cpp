class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int length = 0;
        ListNode* temp = head;
        
        // Find length
        while (temp != NULL) {
            length++;
            temp = temp->next;
        }
        
        // If we need to remove the first node
        if (n == length) {
            return head->next;
        }
        
        // Move to the node before the one we want to remove
        temp = head;
        
        for (int i = 1; i < length - n; i++) {
            temp = temp->next;
        }
        
        // Remove the node
        temp->next = temp->next->next;
        
        return head;
    }
};