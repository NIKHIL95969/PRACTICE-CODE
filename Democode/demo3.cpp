#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        ll arr[size];
        map<ll  ,ll> mp;
        for (int  i = 0; i < size; i++)
        {
            cin >> arr[i];
            
            mp[arr[i]]++;
            
        }
        ll ans = 0;
        for (auto a:mp)
        {
            //for  ans = n(n-1)/2
            ans += (a.second*(a.second-1)/2);
            
        }
        cout << ans<<endl;
        
        
    }
    return 0;
}