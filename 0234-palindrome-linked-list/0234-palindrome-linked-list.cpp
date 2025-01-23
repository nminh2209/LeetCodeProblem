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
    bool isPalindrome(ListNode* head) {
       if (!head || !head->next) return true;

            ListNode* slow = head;
            ListNode* fast = head;
            while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            }

            ListNode* secondHalf = reverseList(slow);

            ListNode* firstHalf = head;
            ListNode* temp = secondHalf;

           while (secondHalf) {
            if (firstHalf->val != secondHalf->val) {
                reverseList(temp); // Restore the list
                return false;
            }
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }
                reverseList(temp);
                return true;
    }
private:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
};