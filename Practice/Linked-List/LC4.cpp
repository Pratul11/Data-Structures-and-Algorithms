#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *ConvertArr2LL(vector<int> arr)
{
    ListNode *head = new ListNode(arr[0]);
    ListNode *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        ListNode *temp = new ListNode(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
ListNode *sortList(ListNode *head)
{
    vector<int> ans;
    ListNode *temp = head;
    while (temp)
    {
        ans.push_back(temp->val);
        temp = temp->next;
    }
    sort(ans.begin(), ans.end());
    cout << endl;
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    ListNode *head1 = new ListNode(ans[0]);
    ListNode *mover = head1;
    for (int i = 1; i < ans.size(); i++)
    {
        ListNode *temp = new ListNode(ans[i]);
        mover->next = temp;
        mover = temp;
    }
    return head1;
}

void PrintLL(ListNode *head)
{
    ListNode *mover = head;
    while (mover)
    {
        cout << mover->val << " ";
        mover = mover->next;
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {};
    ListNode *L1 = ConvertArr2LL(arr);
    PrintLL(L1);
    L1 = sortList(L1);
    PrintLL(L1);
    return 0;
}