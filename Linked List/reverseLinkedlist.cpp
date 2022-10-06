#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node (int data){
        this->data = data;
        this->next = NULL;
    }
};
void Insert(Node* &head,  int val){
    Node* newNode = new Node(val);
    Node* temp = head;
    //cout << head <<" " <<" "<<newNode <<" " << endl;
    newNode->next = head;
    head = newNode;


    //cout << head <<" "<<newNode <<" " << endl;
}
void print(Node* &head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node* reverse(Node* &head){
    //Node* temp = head;
    Node* pre = NULL;
    Node* cur = head;
    Node* next;
    while (cur!=NULL)
    {
       next = cur->next;
       cur->next = pre;

       pre = cur;
       cur = next;
       
    }
    return pre;
    
}
int main(){
    Node* head = NULL;
    int n;
    cout << "Enter the number of node u want to create: "<<endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        Insert(head, data);
    }
    
    print(head);
    cout << "Reverse the list" <<endl;
    Node* newH = reverse(head);
    print(newH);
    return 0;
}