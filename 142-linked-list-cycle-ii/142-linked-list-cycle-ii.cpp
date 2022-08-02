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
    vector<ListNode* >v;
    ListNode *detectCycle(ListNode *head) {
        ListNode* ans=NULL;
        while(head!=NULL)
        {
            if(find(v.begin(),v.end(),head)!=v.end())
            {
                ans=head;
                break;
            }
            v.push_back(head);
            head=head->next;
        }
        return ans;
    }
};