#include <bits/stdc++.h>
using namespace std;

class Node{
    public: // access modifier
    int data; // the data value
    Node* next; // the pointer to the next value
    public:
    // constructor
    Node (int data1, Node* next1){
        data=data1;  // Initialize data with the provided value
        next=next1;  // Initialize next with the provided
    }
    Node (int data1){
        data=data1;  // Initialize data with the provided value
        next=nullptr;  // Initialize next as null since it's the end of the list

    }
};


Node* convertArr2LL(vector<int> &arr) {
    if (arr.empty()) return nullptr; 

    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}


// Function to print the linked list
void printList(Node* head){
    Node* current = head;
    while(current != nullptr){
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Function to calculate the length linked list

int lengthOfLL(Node* head) {
    int cnt = 0;
    Node* temp = head;
    while (temp) {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int main(){
    vector<int> arr={2,5,8,7};
    Node* y= new Node(arr[0]);
    cout<<y<<'\n'; // returns the memory value
    cout<<y->data<<'\n'; // returns the data stored at that memory point
    Node* head = convertArr2LL(arr);
    cout << "Linked List: ";
    cout << head->data << "\n";
    printList(head);
    cout << "\nThe length of Linked List: ";
    cout << lengthOfLL(head);

    return 0;
}