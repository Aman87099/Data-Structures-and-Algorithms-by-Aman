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
    
    
//lenght of a linkedlist//
int lengthofll(ListNode*&head){
    if(head==NULL)
    return 0;
    ListNode*temp = head;
    int cnt = 0;
    while(temp!= NULL){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
    
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
          ListNode*temp = head;
        
     int nodefromfront = lengthofll(head)-n+1;
        if(nodefromfront == 1){
        //deleting first or start node//
      
        head = head->next;
        //memeory free start node//
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting middle or last node//
        ListNode*curr = head;
        ListNode*prev = NULL;
        int cnt = 1;
        while(cnt<nodefromfront){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
        return head ;
        
    }
};