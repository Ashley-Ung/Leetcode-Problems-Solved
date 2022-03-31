Question: Remove Nth Node [Medium]
Given the head of a linked list, remove the nth node from 
the end of the list and return its head.
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
    
Answer: 
class Solution {
public:
    ListNode* removeNthFromEnd (ListNode* head, int n) {
        int counter = 0;
        int a; 
        ListNode* HeadPtr = head;
        while (HeadPtr){
            counter++;
            HeadPtr = HeadPtr->next;
        }
        a = counter-n-1;
        if (a<0) {
            head = head->next;
            return head;
        }
        HeadPtr = head;
        while (a--){
  
            HeadPtr = HeadPtr->next;
        }
        if ((HeadPtr->next)->next) HeadPtr->next = (HeadPtr->next)->next;
        else HeadPtr->next = NULL;
        
        return head;
    }
};
