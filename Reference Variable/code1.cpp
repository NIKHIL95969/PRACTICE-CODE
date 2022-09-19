#include<bits/stdc++.h>
using namespace std;

void change(int& n){
    n++;
}
int main(){

    int a=5;

    cout << "Before " << a << endl;
    change(a);
    cout << "After " << a << endl;

    return 0;
}