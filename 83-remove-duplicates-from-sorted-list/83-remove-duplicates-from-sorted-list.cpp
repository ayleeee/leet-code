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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        ListNode* nd1 = head;
        while(nd1&&nd1->next){
            if(nd1->val == nd1->next->val){
                nd1->next=nd1->next->next;
            }else{
                nd1=nd1->next;
            }
        }
        return head;
    }
};

