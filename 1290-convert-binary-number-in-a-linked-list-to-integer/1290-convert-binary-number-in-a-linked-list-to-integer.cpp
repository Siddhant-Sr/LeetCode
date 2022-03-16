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
    int count(ListNode * head){
        int count = 0;
        
        while(head){
            count++;
                head=head->next;
        }
        return count;
    }
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        ListNode *temp = head;
        int counter = count(temp);
        while(temp){
            
            counter--;
            ans += ((temp->val)*pow(2,counter));
            temp=temp->next;
        }
        
        
        return ans;
    }
};