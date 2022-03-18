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
//     ListNode* reverse(ListNode *head){
//         if(head==NULL)
//             return head;
        
//         if(head->next==NULL)
//             return head;
        
//         ListNode*prev=NULL, *curr=head, *forward = head;
//         while(curr){
//             forward = curr->next;
//             curr->next = prev;
//             prev=curr;
//             curr= forward;
//         }
//         return prev;
//     }
    void reorderList(ListNode* head) {
//                 if (!head) return;

//         ListNode * slow = head, *fast=head;
//         while(fast && fast->next){
//             slow = slow->next;
//             fast=fast->next->next;
//         }
//         ListNode*temp = slow->next;
//         slow->next=NULL; 
//         ListNode*temp2 = reverse(temp);
        
//     while(head && temp2){
//         fast =head->next;
//         temp = temp2->next;
//         head->next = temp2;
//             temp2->next = fast;
//             head = fast;
//             temp2 = temp;
//     }
              // base case : linkedlist is empty
        if (!head) return;
        
        // finding the middle with the help of two pointer approach
        ListNode *tmp = head, *half = head, *prev = NULL;
        while (tmp->next && tmp->next->next) {
            tmp = tmp->next->next;
            half = half->next;
        }
        
        // adding one bit in case of lists with even length
        if (tmp->next) half = half->next;
        
        // Now reverse the second half
        while (half) {
            tmp = half->next;
            half->next = prev;
            prev = half;
            half = tmp;
        }
        half = prev;
        
        // After reversing the second half, let's merge both the halfes
        while (head && half) {
            tmp = head->next;
            prev = half->next;
            head->next = half;
            half->next = tmp;
            head = tmp;
            half = prev;
        }
        
        // Base case : closing when we had even length arrays
        if (head && head->next) head->next->next = NULL;
        
    }
};