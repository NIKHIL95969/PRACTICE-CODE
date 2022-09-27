#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
long long int arr[N];
int main(){
    int n, m;
    cin >> n >> m;
    long long mx= INT_MIN;
    while (m--)
    {
        int a ,b ,c;
        cin >> a >> b >> c;
    
        arr[a] +=c;
        arr[b+1] -= c;
    }
    for (int i = 1; i <= n; i++){
        {
            arr[i] += arr[i-1];
        }
    }
    for (int i = 1 ; i <= n; i++)
    {
        if (arr[i]>mx)
        {
            mx=arr[i];
        }
        
    }
    cout << mx <<endl;
    return 0;
}