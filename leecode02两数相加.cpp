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
        ListNode* head = new ListNode(-1);
        ListNode* cur = head;//尾插法
        head->next = cur;
        int moreadd = 0;
        while(l1|| l2){
            int n1 = l1 ? l1->val : 0;
            int n2 = l2 ? l2->val : 0;
            int temp = n1 + n2 + moreadd;
            ListNode* tmp = new ListNode(temp % 10);
            moreadd = temp / 10;
            cur->next = tmp;
            cur = cur->next;
            if(l1)
                l1 = l1->next;
            if(l2)
                l2 = l2->next;
        }    
        if(moreadd)
            cur->next = new ListNode(moreadd);
        return head->next;
    }
};
