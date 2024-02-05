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

ListNode *length(ListNode *head)
{
    int count = 0, ans;
    ListNode *temp = head;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    ans = count / 2 + 1;
    count = 1;
    temp = head;
    while (count != ans)
    {
        temp = temp->next;
        count++;
    }
    head = temp;
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    ListNode *L1 = ConvertArr2LL(arr);
    PrintLL(L1);
    L1 = length(L1);
    PrintLL(L1);
    return 0;
}