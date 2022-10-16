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

    // if (head == NULL )
    // {
    //     head = newNode;
    //     return;
    // }

    // Node* temp = head;
    // while (temp->next!=NULL)
    // {
    //     temp = temp->next;
    // }
    // temp->next = newNode;

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
void deleteN(Node* &head, int val){
    if (head==NULL)
    {
        return;
    }
    if (head->next==NULL)
    {
        //deleteN(head);
        return;
    }
    
    
    Node* temp = head;
    if (val== temp->data )
    {
        head = temp->next;
        delete temp;
        return;
    }
    
    while (temp->next->data!= val)
    {
        temp = temp->next;
    }
    Node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
    

}
int main(){
    Node* head = new Node(0);
    Node* tail = head;
    InsertAtTail(tail, 1);
    InsertAtTail(tail, 2);
    InsertAtTail(tail, 3);
    display(head);
    InsertAtHead(head, 17);
    InsertAtHead(head, 6);
    InsertAtHead(head, 37);
    display(head);
    deleteN(head, 37);
    cout << endl;
    display(head);
    cout << search(head, 5) <<endl;

    return 0;
}