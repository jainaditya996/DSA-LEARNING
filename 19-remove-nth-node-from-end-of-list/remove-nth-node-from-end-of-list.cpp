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
    int m=count(head);
    int i=m-n;
    ListNode* temp=head;
    ListNode* prev=NULL;
    if(m==n){
        //remove the fhead
        ListNode* newhead=head->next;
        delete head;
        return newhead;
    }
    for(int j=0;j<i;j++){
             prev=temp;
             temp=temp->next;
    }    
    prev->next=temp->next;
    return head;
    }

    int count(ListNode* head){
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        return count;
    }
};