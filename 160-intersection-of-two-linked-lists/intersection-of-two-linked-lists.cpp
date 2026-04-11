/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

    int findLength(ListNode* head){
        int count=0;

        while(head!=NULL){
            count++;
            head=head->next;
        }
        return count;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA=findLength(headA);
        int lenB=findLength(headB);

        ListNode* tempA=headA;
        ListNode* tempB=headB;

        if(lenA>lenB){
            int diff=lenA-lenB;
            for(int i=1;i<=diff;i++){
                tempA=tempA->next;
            }

            while(tempA!=tempB){
                tempA=tempA->next;
                tempB=tempB->next;
            }

            return tempA;

        }
        
        else {
            int diff=lenB-lenA;
            for(int i=1;i<=diff;i++){
                tempB=tempB->next;
            }

            while(tempB!=tempA){
                tempB=tempB->next;
                tempA=tempA->next;
            }

            return tempA;
        }
        return NULL;
    }
};