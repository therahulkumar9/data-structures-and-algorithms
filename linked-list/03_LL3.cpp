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

Node* removeEl(Node* head, int el) {
    if(head == nullptr) return head;
    if(head->data == el) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    Node* prev = nullptr;

    while (temp != nullptr)
    {
        if(temp->data == el) {
            prev->next = prev->next->next;
            delete temp;
            break;
        }

        prev = temp;
        temp = temp->next;
    }
    
    return head;
}

Node* insertHead(Node* head, int val) {
    Node* temp = new Node(val, head);
    return temp;
};

Node* insertTail(Node* head, int val) {
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}

Node* insertPosition(Node* head, int el, int k) {
    if(head == NULL) {
        if(k == 1) return new Node(el);
        else return NULL;
    }

    if(k == 1) {
        Node* temp = new Node(el, head);
        return temp;
        // in one line
        // return new Node(el, head);
    }

    int cnt = 0;
    Node* temp = head;
    while(temp != NULL) {
        cnt++;
        if(cnt == k - 1) {
            Node* x = new Node(el);
            x->next = temp->next;
            temp->next = x;
            break;
        }
        temp = temp->next;
    }

    return head;
}

Node* insertBeforeValue(Node* head, int el, int val) {
    if(head == NULL) {
        return NULL;
    }

    if(head->data == val) {
        return new Node(el, head);
    }

    Node* temp = head;
    while(temp->next != NULL) {
        if(temp->next->data == val) {
            Node* x = new Node(el, temp->next);
            temp->next = x;
            break;
        }
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
    cout << '\n';
    head = removeK(head, 2);
    printLL(head);
    cout << '\n';
    head = removeEl(head, 8);
    head = removeEl(head, 3);
    head = removeEl(head, 5);
    printLL(head);
    cout << endl;
    head = insertHead(head, 12);
    printLL(head);

    cout << endl;
    head = insertTail(head, 89);
    printLL(head);


    cout << endl;
    head = insertPosition(head, 8, 3);
    printLL(head);

    cout << endl;
    head = insertBeforeValue(head, 1, 2);
    printLL(head);
    return 0;
}