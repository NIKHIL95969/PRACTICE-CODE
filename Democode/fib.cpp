#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a <<" ";
    for (int i = 2; i < n; i++)
    {
        a = a+b;
        b = a-b;
        cout << a<<" ";
    }
    
    return 0;
}