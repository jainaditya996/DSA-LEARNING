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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL|| head->next->next==NULL){
            return head;
        }
        ListNode* oddhead=head;
        ListNode* evenhead=head->next;
        ListNode* temp=head->next;
        ListNode* tempodd=oddhead;
        ListNode* tempeven=evenhead;
      int count=0;
        while(temp!=NULL){
             temp=temp->next;
             count++;
            if(count%2==0&& temp!=NULL){
                ListNode* newNode=new ListNode(temp->val) ;
                evenhead->next=newNode;
                evenhead=evenhead->next;
            }
            if(count%2!=0 && temp!=NULL){
                ListNode* newNode=new ListNode(temp->val) ;
               tempodd->next=newNode;
               tempodd=tempodd->next;
            }
        }
        evenhead->next=NULL;

    tempodd->next=tempeven;
           return oddhead;
    }
};