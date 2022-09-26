#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    
    // Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void insertion(Node* &head, int data ){
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}
void printNode(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main(){
    Node* node1 = new Node(100);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    Node* head = node1;
    // printNode(head);
    // insertion(head , 18);
    // printNode(head);
    // insertion(head , 20);
    // printNode(head);
    for (int i = 0; i < 5; i++)
    {
        int a;
        cin >>a ;
        insertion(head , a);
    }
    printNode(head);
    return 0;
}