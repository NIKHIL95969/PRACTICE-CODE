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
    ~Node(){
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        
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
void insertMiddle(Node* &head , int p , int d){
    if (p==1)
    {
        insertAtHead(head, d);
        return ;
    }
    Node* temp = head;
    int ct = 0;
    while (ct < p-1)
    {
        temp = temp->next;
        ct++;
    }
    Node* insertNew = new Node(d);
    insertNew->next = temp->next;
    temp->next = insertNew;
    //tail = 
    
    
}
void print(Node* &head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout << temp->data <<" ";
        temp->next = NULL;
        temp = temp->next;
    }
    cout << endl;
}
void deleteAtpos(Node* &head , int pos){
    if (pos == 1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node* curr= head;
        Node* pre = NULL;
        int ct = 1;
        while (ct<pos)
        {
            pre = curr->next;
            curr = curr->next;
            ct++;
        }
        pre->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
    
}
int main(){
    Node* node1 = new Node(0);
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
    insertMiddle(head , 3 , 43);
    print(head);
    deleteAtpos(head, 2);
    print(head);
    return 0;
}