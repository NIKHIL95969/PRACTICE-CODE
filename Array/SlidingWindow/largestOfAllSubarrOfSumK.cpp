#include<bits/stdc++.h>
using namespace std;

int l_subarr(vector<int> arr, int k){

    int ans = 0;
    int i=0 ,j=0;
    int sum = 0;
    while (j<arr.size())
    {
        sum +=arr[j];
        if (sum<k)
        {
            j++;
        }
        else if(sum==k){
            int mx = j-i+1;
            for (int i = i; i <= j; i++)
            {
                cout << arr[i] << endl;
            }
            
            ans = max(ans,mx);
            j++;
        }
        else if (sum>k)
        {
            while(sum>k){
                sum -=arr[i];
                i++;
            }
            j++;
        }  
    }
    
    return ans;
}

int main(){
    vector<int> arr = {4,2,3,5,1,1,3,1,1,1};
    cout << " Output " << l_subarr(arr,5)<< endl;
    return 0;
}