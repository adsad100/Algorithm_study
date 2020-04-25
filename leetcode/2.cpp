// Problem 2 in leetcode
// Linked List Sum of int
// 연결 리스트를 숫자로 보고 합을 나타냄
// round UP하는 부분에 있어서 새로운 노드를 추가할 지 해당 값에 더해서 sum을 계산할 지 분기 처리
// 또한 두 연결 리스트의 길이가 다를 때도 해당 부분에 있어 분기처리

#include <iostream>
#include <vector>

using namespace std;


struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int l1Val = l1 == NULL ? 0 : l1->val;
        int l2Val = l2 == NULL ? 0 : l2->val;
        
        int sum = l1Val + l2Val >= 10 ? l1Val + l2Val - 10 : l1Val + l2Val;
        int roundUp = l1Val + l2Val >= 10 ? 1 : 0;
        
        ListNode* head = new ListNode(sum);
        ListNode* temp = head;
        
        if(roundUp && l1->next == NULL && l2->next == NULL){
            temp->next = new ListNode(1);
            temp = temp->next;
        }
        
        l1 = l1->next;
        l2 = l2->next;
        
        while(l1 != NULL || l2 != NULL){
            l1Val = l1 == NULL ? 0 : l1->val;
            l2Val = l2 == NULL ? 0 : l2->val;
            sum = l1Val + l2Val + roundUp >= 10 ? l1Val + l2Val + roundUp - 10 : l1Val + l2Val + roundUp;
            temp->next = new ListNode(sum);
            roundUp = l1Val + l2Val + roundUp >= 10 ? 1 : 0;
            
            temp = temp->next;
            l1 = l1 == NULL ? NULL : l1->next;
            l2 = l2 == NULL ? NULL : l2->next ;
            if(l1 == NULL && l2 == NULL && roundUp){
                temp->next = new ListNode(roundUp);
            }
        }
        return head;
        
    }
};