#include <bits/stdc++.h>
using namespace std;

struct Node
{
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

Node *convertArr2LL(vector<int> &arr)
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

int lengthOfLL(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

bool checkIfPresent(Node *head, int val)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->data == val)
            return true;
        temp = temp->next;
    }

    return false;
}

Node* deleteHead(Node* head) {
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node* deleteTail(Node* head) {
    if(head == NULL || head->next->next == NULL) return NULL;
    Node* temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    
    free(temp->next);
    temp->next = nullptr;

    return head;

}

int main()
{
    vector<int> arr = {5, 2, 4, 9};
    Node *y = new Node(arr[0], nullptr);
    cout << y->next;

    Node *head = convertArr2LL(arr);
    cout << "Head" << head->next->next->next->next;

    Node *temp = head;
    cout << '\n';

    while (temp)
    {
        cout << " " << temp->next << endl;
        cout << temp->data << endl;
        temp = temp->next;
    }

    cout << "Count: " << lengthOfLL(head) << endl;

    cout << "Is 20 present? " << (checkIfPresent(head, 20) ? "Yes" : "No") << endl;
    cout << "Is 9 present? " << (checkIfPresent(head, 9) ? "Yes" : "No") << endl;

    head = deleteHead(head);
    cout << head->data << endl;
    cout << "Now count: " << lengthOfLL(head) << endl;

    head = deleteTail(head);
    cout << head->next->data << endl;
    cout << "Now count: " << lengthOfLL(head) << endl;


    return 0;
}