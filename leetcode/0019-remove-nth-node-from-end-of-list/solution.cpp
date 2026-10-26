// Runtime: 0 ms
// Memory: 14.8 MB

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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length=0;
        ListNode* current=head;
        while(current){
            length++;
            current=current->next;
        }
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        int steps=length-n;
        for(int i=0;i<steps;i++){
            prev=prev->next;
        }
        ListNode* to_delete=prev->next;
        prev->next=prev->next->next;
        delete to_delete;
        return dummy->next;
    }
    
};