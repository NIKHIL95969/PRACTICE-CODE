/* 
Calculate the sum from l to r using precompution
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
int preSum[N];

int main(){
    int n;
    cin >> n;
    long long int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        sum  = preSum[i-1] + a;
        + a;
        preSum[i] = sum; 
    }
    for (int i = 0; i <= n; i++)
    {
        cout << preSum[i] << " "; 
    }
    
    int t;
    cin >> t;
    while (t--)
    {
        int l , q;
        cin >> l >> q;
        cout << preSum[q]-preSum[l-1] <<endl;
        
    }
    

    return 0;
 }