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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int counta=0,countb=0;
        ListNode *temp1=headA;
        ListNode *temp2=headB;
        while(temp1){
            counta++;
            temp1=temp1->next;
        }
         while(temp2){
            countb++;
            temp2=temp2->next;
        }
        if(counta>countb){
            int d=counta-countb;
            int i=0;
            while(headA&&i<d){
                headA=headA->next;
                i++;
            }
        }
            else{
                int d=countb-counta;
            int i=0;
            while(headB&&i<d){
                headB=headB->next;
                i++;
            }
            }
            while(headA&&headB){
                if(headA==headB)
                    return headA;
                headA=headA->next;
                headB=headB->next;
            }
            return NULL;
    
        
    }
};
