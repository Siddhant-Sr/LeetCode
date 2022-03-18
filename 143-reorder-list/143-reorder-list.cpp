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
    ListNode* reverse(ListNode *head){
        if(head==NULL)
            return head;
        
        if(head->next==NULL)
            return head;
        
        ListNode*prev=NULL, *curr=head, *forward = head;
        while(curr){
            forward = curr->next;
            curr->next = prev;
            prev=curr;
            curr= forward;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
                if (!head) return;

        ListNode * slow = head, *fast=head;
        while(fast && fast->next){
            slow = slow->next;
            fast=fast->next->next;
        }
        ListNode*temp = slow->next;
        slow->next=NULL; 
        ListNode*temp2 = reverse(temp);
        
    while(head && temp2){
        fast =head->next;
        temp = temp2->next;
        head->next = temp2;
            temp2->next = fast;
            head = fast;
            temp2 = temp;
    }
        
    }
};