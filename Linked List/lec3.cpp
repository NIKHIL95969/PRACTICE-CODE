#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }


};

void  InsertAtTail(Node* &tail, int val){
    Node* newNode = new Node(val);
    tail->next = newNode;
    tail = newNode;

}
void InsertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);
    Node* temp = head;
    newNode->next = head;
    head = newNode;
    //delete temp;
}
void display(Node* head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout << temp->data <<" -> ";
        temp = temp->next;
    }
    cout << "NULL" <<endl;
}
bool search(Node* head, int s){

    Node* temp = head;
    while (temp != NULL)
    {
        if (s==temp->data)
        {
           return true;
        }       
        
        temp = temp->next;
    }
    

    return false;
}
Node* rec(Node* &head){
    if (head==NULL || head->next==NULL)
    {
        return head;
    }
    cout << head->data <<endl;
    Node* newH = rec(head->next);
     //cout << " " << head->data <<endl;
    head->next->next = head;
    cout <<head->data<< " " << head <<endl;
    head->next = NULL;
    cout << newH <<endl;
    return newH;
}
int main(){
    Node* head = new Node(0);
    Node* tail = head;
    InsertAtTail(tail, 1);
    InsertAtTail(tail, 2);
    InsertAtTail(tail, 3);
    InsertAtHead(head, 17);
    InsertAtHead(head, 6);
    InsertAtHead(head, 37);
    display(head);
    Node* newhead = rec(head);
    display(newhead);
    return 0;
}