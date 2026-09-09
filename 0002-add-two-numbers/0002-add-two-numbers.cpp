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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=l1;
        ListNode* curr=l2;
        int carry=0;

        ListNode* head = NULL;
        ListNode* ans = NULL;
        while(temp!=NULL || curr!=NULL ){
            int sum=carry;
            if(temp!=NULL){
                sum+=temp->val;
                temp=temp->next;
            }
            if(curr!=NULL){
                sum+=curr->val;
                curr=curr->next;
            }
            int digit=sum%10;
            carry=sum/10;

            ListNode* test=new ListNode(digit);

            if(head==NULL){
                head=test;
                ans=test;
            }
            else{
                ans->next=test;
                ans=ans->next;
            }

        }
        if(carry!=0){
            ans->next=new ListNode(carry);
        }
        return head;
    }
};