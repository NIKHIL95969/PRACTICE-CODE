#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
   int arr[n+1];
    for(int i=1;i<=n;++i) cin>>arr[i];
    //int max=arr[1];
    int max=arr[0];
    for(int i=1;i<=n;++i){
        if(max<arr[i]){
            max=arr[i];
        }
    }
   long long ans=0;
    for(int i=k;i<=n;i++){
        if(arr[i]==max){
            ans=ans+n-i+1;
        }
    }
    cout<<ans<<endl;
}
    return 0;
}
