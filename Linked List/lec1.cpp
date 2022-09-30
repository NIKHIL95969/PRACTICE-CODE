#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data= data;
        this  -> next= NULL;
    }
};


void insertAtHead(Node* &head, int data){
    // create new node
    Node* temp = new Node(data);
    temp->next = head;
    head  = temp;
}
void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp ;
}
void insertMiddle(Node)
void print(Node* &head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    int n;
    cin  >> n;
    while (n--)
    {
        int a;
        cin >> a;
        insertAtTail(tail, a );
    }
    print(head);

    return 0;
}