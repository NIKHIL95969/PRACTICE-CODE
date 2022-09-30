#include<stdio.h>
#include<stdlib.h>
using namespace std;


struct Node{
    //public:
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
    // cout << node1->data <<endl;
    //  cout << node1->next <<endl;
    Node* head = node1;
    print(head);
    insertAtHead(head , 15);
    print(head);
    insertAtHead(head , 3);
    print(head);
    insertAtHead(head , 23);
    print(head);


    return 0;
}