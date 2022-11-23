#include<bits/stdc++.h>
using namespace std;

vector<int> duplicates(int arr[], int n) {
    // code here
    vector<int> ans;
    //sort(arr,arr+n);
    int hs[100000] = {0};
    for(int i=0; i<n; i++){
        hs[i]++;
    }
    
    for(int  i = 0; i<n; i++){
        if(hs[i]>1){
            cout <<i;
            ans.push_back(i);
        }
    }
    
    return ans;
}

int  main(){
    int arr[] ={1,2,3,0,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    v = duplicates(arr,n);
    cout << "d";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] <<" ";
    }
    
    return 0;
}