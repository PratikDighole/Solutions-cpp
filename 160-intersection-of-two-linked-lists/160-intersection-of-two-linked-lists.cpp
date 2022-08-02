/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    map<ListNode*,int> visit;
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* h1=headA;
        ListNode* h2=headB;
        ListNode* ans=NULL;
        while(h1!=NULL)
        {
            visit[h1]=1;
            h1=h1->next;
        }
        while(h2!=NULL)
        {
            if(visit.find(h2)!=visit.end())
            {
                ans=h2;
                break;
            }
            h2=h2->next;
        }
        return ans;
    }
};