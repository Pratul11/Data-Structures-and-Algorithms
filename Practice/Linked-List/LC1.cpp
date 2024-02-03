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
ListNode *reverseList(ListNode *head)
{
    ListNode *last = nullptr;
    while (head)
    {
        swap(head->next, last);
        swap(head, last);
        PrintLL(last);
        PrintLL(head);
    }
    return last;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    ListNode *L1 = ConvertArr2LL(arr);
    PrintLL(L1);
    L1 = reverseList(L1);
    PrintLL(L1);
    return 0;
}