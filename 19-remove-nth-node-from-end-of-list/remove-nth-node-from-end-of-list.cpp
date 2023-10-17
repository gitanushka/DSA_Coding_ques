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
        ListNode* temp = head;
        int length = 0; 
        
        while(temp!=NULL ){
            temp = temp->next;
            length++;
        }
        temp = head;
        int count = length-n+1;
        ListNode* prev = nullptr;
        while(temp!=NULL && count>1){
             prev = temp;
             temp = temp->next;
             count--;
        }
       
        if (prev == nullptr) {
    // Node to be removed is the head
        head = head->next;
        delete temp;
        } else {
        prev->next = temp->next;
        delete temp;
        }

        return head;
        
                
    }
};