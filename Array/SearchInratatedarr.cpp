#include <bits/stdc++.h>
using namespace std;

int pivot(vector<int> v){
    int n = v.size();
    int s =0;
    int e = n-1;
    int mid = s+(e-s)/2;
    if(n==1){
        return s;
    }
    while(s<e){
        if(v[0]<=v[mid]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}
int binarySearch(vector<int> v, int k){
    int n = v.size();
    int s =0;
    int e = n-1;
    // int mid = s+(e-s)\2;
    int p = abs((pivot(v))-1);
    cout << "Pivot is : " << p << endl;

    if(v[0]<=k && k<=v[p])
    {
        int mid = s+(p-s)/2;
        while(s<(p)){
            if(v[mid] == k){
                return mid;
            }
            if(k > v[mid]){
                p = mid+1;
            }
            else{
                e = mid-1;
            }
            
            mid = s+(p-s)/2;
        }
    }
    else
    {
        int mid = p+(e-p)/2;
        while(p<e){
            if(v[mid] == k){
                return mid;
            }
            if(k > v[mid]){
                p = mid+1;
            }
            else{
                e = mid-1;
            }
            
            mid = p+(e-p)/2;
        }
    }
    return -1;
}
int main(){

    //int search(vector<int>& nums, int target) {
    vector<int> nums = {3,1};
    int target = 1;
    int ans = binarySearch(nums, target);
    cout <<"Element " << target << " is present at index : "<< ans << endl;
    return 0;
}



