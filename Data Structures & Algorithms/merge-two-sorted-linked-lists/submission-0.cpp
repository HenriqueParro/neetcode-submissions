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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {



        ListNode* cur1 = list1;
        ListNode* cur2 = list2;
        
        ListNode* nex1 = nullptr;
        ListNode* nex2 = nullptr;

        ListNode dummy(0);
        ListNode* current = &dummy;

        while(cur1 && cur2){

            nex1 = cur1->next;
            nex2 = cur2->next;

            if(cur1->val <= cur2->val){
                
                current->next = cur1;
                cur1 = nex1;
                

            } else {
                
                current->next = cur2;
                cur2 = nex2;

            }

            current = current->next; 

        }

        if (cur1 != nullptr) {
            current->next = cur1;
        } else {
              current->next = cur2;
            }

        return dummy.next;
        
    }
};
