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

int main(){
    Node* head = new Node(0);
    Node* tail = head;
   cout << head->next << endl;
    return 0;
}