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
    ListNode* reverse(ListNode* h,ListNode* c,ListNode* p)
    {
        if(c==NULL)
        {
            return p;
        }
        h=h->next;
        c->next=p;
        p=c;
        c=h;
        return reverse(h,c,p);
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)return head;
        ListNode* prev=NULL;
        ListNode* curr=head;
        return reverse(head,curr,prev);
    }
};