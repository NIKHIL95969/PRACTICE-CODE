#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for (int i = 10; i >=0 ; i--)
    {
        cout << ((n>>i)&1) ;
    }
    
}
int main(){
    
    int a = 15;
    print(a);
    int i = 4;
    if((a&(1<<i)) !=0 ) cout << "\nSet bit" << endl;
    else cout << "\nNot set bit" << endl;

    // set bit
    print(a | (1<<5));

    // unset
    cout << endl;
    print( a&(~(1<<0)));

    // toggle
    cout << endl;
    print( a^((1<<2)));
    cout << endl;
    print( a^(~(1<<0)));

    // find bit count

    int cnt = 0;
    for (int i = 31; i >= 0; i--)
    {
        if(((1<<i)&a)!=0) cnt++;
    }

    cout <<"\n" << cnt << endl;
    // Build in function to count number of bits

    cout << __builtin_popcount(a) << endl;
    cout << __builtin_popcountll((1LL<<60)-1) << endl;

    return 0;
}