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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* h1;
        ListNode* h2;
        if(list1==NULL)
        {
            return list2;
        }
        else if(list2==NULL)
        {
            return list1;
        }
        else{
            if(list1->val<=list2->val){
                h1=h2=list1;
                list1=list1->next;
            }
            else{
                h1=h2=list2;
                list2=list2->next;
            }
            while(list1!=NULL && list2!=NULL)
            {
                if(list1->val<=list2->val)
                {
                    // h2=list1;
                    h1->next=list1;
                    list1=list1->next;
                }
                else{
                    // h2=list2;
                    h1->next=list2;
                    list2=list2->next;
                }
                h1=h1->next;
            }
            if(list1==NULL)
            {
                h1->next=list2;
            }
            else{
                h1->next=list1;
            }
            return h2;
        }
    }
};