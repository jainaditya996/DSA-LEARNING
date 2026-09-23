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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count==0||count==1){
            return head;
        }
        for(int i=0;i<k%count;i++){
            temp=head;
           
            while(temp->next->next!=NULL){
                temp=temp->next;
            }      
            temp->next->next=head;
            head=temp->next;
            temp->next=NULL;
            
             }
              return head;
    }
   
};