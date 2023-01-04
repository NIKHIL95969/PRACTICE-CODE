#include<bits/stdc++.h>
using namespace std;

void sortS(stack<int> &s, int val){
    if(s.size()==0 || s.top()<=val){
        s.push(val);
        return;
    }

    int temp = s.top();
    s.pop();
    sortS(s, val);


    s.push(temp);
}

void sortStack(stack<int> &s){
    if(s.size()==1) return;

    int temp = s.top();
    s.pop();
    sortStack(s);

    sortS(s, temp);
}

void printStack(stack<int> s){
    while(s.size()!=0){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main(){

    stack<int> s;
    s.push(2);
    s.push(0);
    s.push(1);
    s.push(7);
    s.push(8);
    s.push(3);
    printStack(s);

    sortStack(s);

    printStack(s);

    return 0;
}