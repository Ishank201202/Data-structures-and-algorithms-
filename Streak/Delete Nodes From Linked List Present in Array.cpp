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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        // set<int> store;
        // sort(nums.begin(),nums.end());
        // for(auto i:nums)
        // {
        //     store.insert(i);
        // } 
        // while(store.find(head->val) != store.end())
        // {
        //     head=head->next;
        // }
        // if(head->next)
        // {
        //     ListNode* temp=head->next;
        //     ListNode* prev=head;
        // while(temp!=NULL)
        // {
        //     if(store.find(temp->val)!=store.end())
        //     {
        //         prev->next=temp->next;
        //         prev=temp;
        //         temp=temp->next;
        //     }
        //     else{
        //         prev=temp;
        //         temp=temp->next;
        //     }
        // }
        // }
        // return head;

        unordered_set<int> st (begin(nums),end(nums));
        while(head!=NULL && st.find(head->val) != st.end())
        {
            ListNode* temp=head;
            head=head->next;
            delete(temp); //deleting the hanging node 
        }
        ListNode* curr=head;
        while(curr!=NULL && curr->next!=NULL)
        {
            if(st.find(curr->next->val)!=st.end())
            {
                ListNode* temp=curr->next;
                curr->next=curr->next->next;
                delete(temp);//deleting the hanging node
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};