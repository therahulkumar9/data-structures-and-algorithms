#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}
void printLL(Node* head) {
    while(head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}

Node* removeK(Node* head, int k) {
    if(head == nullptr) return head;
    if(k == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    int cnt = 0;
    Node* temp = head;
    Node* prev = nullptr;

    while (temp != nullptr)
    {
        cnt++;
        if(cnt == k) {
            prev->next = prev->next->next;
            delete temp;
            break;
        }

        prev = temp;
        temp = temp->next;
    }
    
    return head;
}

int main() {
    vector<int> arr = {5, 3, 7, 9, 2, 8, 3};
    Node* head = convertArr2LL(arr);

    if (head && head->next) {
        cout << head->next->data << endl;
    }
    printLL(head);

    head = removeK(head, 2);
    printLL(head);
    return 0;
}