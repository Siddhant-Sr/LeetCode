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
    bool isPalindrome(ListNode* head) {
//         ListNode *slow =head, *fast=head, *prev=NULL, *temp;
//         while(fast && fast->next){
            
//              fast = fast->next->next;
            
//             temp = slow->next;
//             slow->next=prev;
//             prev = slow;
//             slow= temp;
            
//         }
        
        stack<int> st;
        ListNode *temp = head;
        while(temp){
            st.push(temp->val);
            temp=temp->next;
        }
        bool ans = true;
        ListNode *temp1 = head;
        while(temp1){
            if(st.top()!=temp1->val){
                ans = false;
                break;
            }
            temp1=temp1->next;
            st.pop();
            ans=true;
        }
      return ans  ;
    }
};