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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        ListNode*finalhead = NULL;
        if(l1->val <l2->val){
            finalhead = l1;
            l1 = l1->next;
        }
        else{
            finalhead = l2;
            l2 = l2->next;
        }
        ListNode*ft = finalhead;
        while(l1 && l2){
            if(l1->val < l2->val){
                ft->next = l1;
                l1 = l1->next;
            }
            else{
                ft->next = l2;
                l2 = l2->next;
            }
            ft = ft->next;
        }
        if(l1){
            ft->next = l1;
        }
        else{
            ft->next = l2;
        }
        return finalhead;
    }
};