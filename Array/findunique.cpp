#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];
    map<int , int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]++];
    }
    int ans=1;
    for (auto i:mp)
    {
        for (auto j:mp)
        {
            if ( i!=j)
            {
                ans=0;
            }
            
        }
        //cout << m
        
    }
    if(ans==1)
        cout << "Yes" <<endl;
    else
        cout << "no" <<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i]<< " ";
    // }
    
    
    return 0;
}