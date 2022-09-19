#include<bits/stdc++.h>
using namespace std;
const int N = 1e5; // 10^5
long long fact[N]; 

int main(){
    fact[0]=fact[1]=1;
    for (int i = 2; i < N; i++)
    {
        fact[i] = fact[i-1]*i;
    }

    // Above is the hash function to store N number factorial

    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        cout << "Factorial of " << a << " is " << fact[a]<<endl;
    }
    return 0;
}