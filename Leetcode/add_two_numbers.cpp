/**Not finished */


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
//  int linkedListToNumber(ListNode* head)
//  {
//     int number =0;
//     int multiplier =1;
//     while(head != nullptr)
//     {
//         number+= head->val * multiplier;
//         multiplier*=multiplier;
//         head=head->next;
//     }

//     return number;
//  }

 class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode* answer =nullptr;
            ListNode* current = nullptr;
            int number1 = 0;
            int number2 = 0;
            while(l1 != nullptr)
            {
                number1 = number1 * 10 + l1->val;
                l1 = l1->next;
            }
            
            while(l2 != nullptr)
            {
                number2 = number2 * 10 + l2->val;
                l2 = l2->next;
            }
           


            int answer_number=number1+number2;
            

            while(answer_number>0)
            {
                int digit = answer_number % 10;
                ListNode* newNode =new ListNode(digit);


                if (!answer) {
                    answer = newNode;
                    current = newNode;
                } else {
                    current->next = newNode;
                    current = newNode;
                }

                answer_number=answer_number/10;
            }

            return answer;
        }
    };