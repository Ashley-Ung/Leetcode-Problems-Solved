Question: Reverse List [Easy]
Given the head of a singly linked list, reverse the list, and return the reversed list.
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

Answer: [Recursive] 
class Solution {
public:
    ListNode* reverseList (ListNode* head) {
        return reverseList (head, NULL); 
    }
    
    ListNode* reverseList (ListNode* psHead, ListNode* reversedList) {
        if (NULL == psHead) {
            return reversedList;
        }
        ListNode* psPrev;
        psPrev = psHead->next;
        psHead->next = reversedList; 
        return (reverseList (psPrev, psHead));
    }
};

Answer: [Non-Recursive]
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (NULL == head) {
            return NULL;
        }
        
        ListNode* psPrev = NULL;
        ListNode* psCurrent = head; 
        ListNode* psTemp;
        
        while (psCurrent != NULL) {
            psTemp = psCurrent->next;
            psCurrent->next = psPrev; 
            psPrev = psCurrent; 
            psCurrent = psTemp;
        }
        return psPrev;
    }
};
