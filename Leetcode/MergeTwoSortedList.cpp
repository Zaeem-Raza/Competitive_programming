// Leetcode
// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        vector<int> vec;
        ListNode *temp = list1;
        while (temp != nullptr)
        {
            vec.push_back(temp->val);
            temp = temp->next;
        }
        temp = list2;
        while (temp != nullptr)
        {
            vec.push_back(temp->val);
            temp = temp->next;
        }
        sort(vec.begin(), vec.end());
        ListNode *ans;
        temp = ans;
        for (int i = 0; i < vec.size(); i++)
        {
            temp->val = vec[i];
            temp = temp->next;
        }
        return ans;
    }
};