#include<bits/stdc++.h>
using namespace std;



void midDel(stack<int> &s, int k){
    if(s.size()==0 || k==1){
        s.pop();
        return;
    }

    int temp = s.top();
    s.pop();
    midDel(s,--k);
    

    s.push(temp);
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
    int  k = (s.size()+1)/2;
    midDel(s, k);

    printStack(s);

    return 0;
}