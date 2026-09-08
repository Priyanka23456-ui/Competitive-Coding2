class Solution {
public:
    bool isPalindrome(ListNode* head) {

        stack<int> stk;
        ListNode* temp = head;

       
        while (temp != nullptr) {
            stk.push(temp->val);
            temp = temp->next;
        }

       
        temp = head;

        while (temp != nullptr) {
            if (stk.top() != temp->val) {
                return false;
            }

            stk.pop();
            temp = temp->next;
        }

        return true;
    }
};