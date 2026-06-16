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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c = 1, r;
        ListNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
            c++;
        }
        if (c == 1)
            return nullptr;
        r = c - n + 1;
        if (r == 1) {
            head = head->next;
            return head;
        }

        temp = head;
        ListNode* ptr = head;
        ptr = ptr->next;
        for (int i = 1; i < r - 1; i++) {
            temp = temp->next;
            ptr = ptr->next;
        }
        temp->next = ptr->next;

        return head;
    }
};