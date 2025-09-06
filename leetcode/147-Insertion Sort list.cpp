class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode dummy(0);
        
        while (head != nullptr) {
            ListNode *next_head = head->next;
            ListNode *it = &dummy;
            while (it->next && it->next->val < head->val) {
                it = it->next;
            }
            head->next = it->next;
            it->next = head;
            head = next_head;
        }
        
        return dummy.next;
    }
};
