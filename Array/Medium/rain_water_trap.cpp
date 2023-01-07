
#include<bits/stdc++.h>
using namespace std;


void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
    
}
int main(){

    int arr[12] = {0,1,0,2,1,0,1,3,2,1,2,1};
    // int n = sizeof(arr)/sizeof(arr[0]);

    long int n = arr.size();
        long int left[n],right[n];
        long int ans = 0;
        
        left[0] = arr[0];
        for (long int i = 1; i < n; i++)
            left[i] = left[i-1]<arr[i] ? arr[i] : left[i-1];

        right[n-1] = arr[n-1];
        for (long int i = n-2; i >=0; i--)
            right[i] = right[i+1] < arr[i]? arr[i] : right[i+1]; 

        print(left, n);
        print(right, n);

        for (int i = 0; i < n; i++)
        {
            ans = ans + left[i]>right[i]? (left[i]-right[i]):(right[i]-left[i]);
        }

        return ans;
    }
    
    
    
    cout << ans << endl;

    return 0;
}