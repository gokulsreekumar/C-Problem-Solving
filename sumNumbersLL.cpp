#include <iostream>
#include <vector>
using namespace std;


struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int new_carry=0, curr_carry=0, tmp1=0;
        ListNode* sum=nullptr;
        ListNode* tmp;
        ListNode* num1=l1; 
        ListNode* num2=l2;
        while(num1!=nullptr || num2!=nullptr) {
            int digSum;
            if(num1==nullptr) {
               digSum = num2->val + curr_carry;  
            } else if(num2==nullptr) {
               digSum = num1->val + curr_carry; 
            } else {
               digSum = num1->val + num2->val + curr_carry; 
            }
            
            if(10-(digSum)>0){
                tmp1 = digSum;
                new_carry=0;
            } else {
                tmp1 = digSum-10;
                new_carry = 1;
            }
            if(sum==nullptr) {
                sum = new ListNode(tmp1);
                tmp = sum;
            } else {
                tmp->next = new ListNode(tmp1);
                tmp=tmp->next;
            }
            curr_carry = new_carry;
            if(num1==nullptr) {
              num2=num2->next;  
            } else if(num2==nullptr) {
              num1=num1->next; 
            } else {
                num1=num1->next;
                num2=num2->next;  
            }
        }
        if(new_carry==1){
            tmp->next= new ListNode(1);
        }
        return sum;
    }
};