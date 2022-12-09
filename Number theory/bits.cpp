#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for (int i = 10; i >=0 ; i--)
    {
        cout << ((n>>i)&1) ;
    }
    
}
int main(){
    print(16);
    int a = 16;
    int i = 4;
    if((a&(1<<i)) !=0 ) cout << "\nSet bit";
    else cout << "\nNot set bit";
    return 0;
}