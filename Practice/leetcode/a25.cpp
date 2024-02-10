#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node *LinkedList(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void printLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void rev(Node *head, int k)
{
    int count = 1;
    Node *temp = new Node(head->data);
    Node *trev = head;
    while (trev)
    {
        while (count != k)
        {
            trev = trev->next;
            insertAtEnd(temp, trev->data);
            count++;
        }
        reverse(temp);
    }
}
int main()
{
    vector<int> arr = {1, 3, 2, 5, 7, 6};
    Node *L1 = LinkedList(arr);
    printLL(L1);
    return 0;
}