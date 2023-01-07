// medium
// simple solution

#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[7] = {1,7,3,6,8,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = INT_MIN;
    // // simple solution
    // for (int  i = 0; i < n; i++)
    // {
    //     for (int j =  i+1; j < n; j++)
    //     {
    //         int h = min(arr[i],arr[j]);
    //         int b = j-i;
    //         ans = max(ans, h*b);
    //     }
        
    // }


    // Optimize solution
    int i = 0; int j = n-1;
    // int count = 0;
    while(i<j){
        ans = max(ans,(min(arr[i],arr[j])*(j-i)));
        arr[i]<arr[j] ? i++: j--;
    }
    
    cout << ans << endl;

    return 0;
}