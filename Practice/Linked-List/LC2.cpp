#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *DLLcreation(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp1 = new Node(arr[i], temp);
        temp->next = temp1;
        temp = temp1;
    }
    return head;
}

Node *addTwoNumbers(Node *L1, Node *L2)
{
    Node *temp1 = L1;
    Node *L3;
    Node *temp2 = L2;
    stack<int> st1;
    stack<int> st2;
    while (temp1)
    {
        st1.push(temp1->data);
        temp1 = temp1->next;
    }
    while (temp2)
    {
        st2.push(temp2->data);
        temp2 = temp2->next;
    }
    int carr = 0;
    while (!st1.empty() || !st2.empty())
    {
        int val = st1.top() + st2.top();
        val += carr;
        if (carr > 0)
        {
            carr = 0;
        }
        if (val > 9)
        {
            carr = val / 10;
            val = val % 10;
        }
        // L3 = InsertAtEnd(L3, val);
        cout << val << " ";
        st1.pop();
        st2.pop();
    }
    return L3;
}

Node *InsertAtEnd(Node *head, int value)
{
    Node *temp = new Node(value);
    Node *mover = head;
    while (mover->next != nullptr)
    {
        mover = mover->next;
    }
    mover->next = temp;
    return head;
}

// Node *reverseDLL1(Node *head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     Node *prev = NULL;
//     Node *current = head;
//     while (current != NULL)
//     {
//         prev = current->back;
//         current->back = current->next;
//         current->next = prev;
//         current = current->back;
//     }
//     return prev->back;
// }

void printDLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {2, 4, 3};
    vector<int> arr1 = {5, 6, 4};
    Node *L1 = DLLcreation(arr);
    Node *L2 = DLLcreation(arr1);
    printDLL(L1);
    printDLL(L2);
    Node *L3 = addTwoNumbers(L1, L2);
    printDLL(L3);
    return 0;
}