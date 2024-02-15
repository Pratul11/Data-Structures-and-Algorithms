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

ListNode *rotateRight(ListNode *head, int k)
{
    int count = 0;
    if (k > 20)
    {
        ListNode *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
            count++;
        }
    }
    k = k % (count + 1);
    while (k--)
    {
        ListNode *temp = head;
        ListNode *prev;
        while (temp->next != nullptr)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = nullptr;
        temp->next = head;
        head = temp;
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

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    ListNode *L1 = ConvertArr2LL(arr);
    PrintLL(L1);
    L1 = rotateRight(L1, 2000000000);
    PrintLL(L1);
    return 0;
}