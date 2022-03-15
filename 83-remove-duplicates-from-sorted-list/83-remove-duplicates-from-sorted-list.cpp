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
    ListNode* deleteDuplicates(ListNode* head) {
//        ListNode*prev=NULL, *curr=head;
//         while(curr){
//             if(prev->val==curr->val){
//                 prev->next=curr->next;
//             }
//             prev->next;
//             curr->next;
//         }
//         return head;
        
        
        
        if(!head) return head;
	ListNode* tmp = head;

	while(tmp && tmp -> next)
	{
		if(tmp -> val == tmp -> next -> val)
			tmp -> next = tmp -> next -> next;
		else
			tmp = tmp -> next; 
	}

	return head;
    }
};