#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>& arr, int n, int k){
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            e = mid-1;
        }
        else if(k<arr[mid]){
            e = mid -1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int binarySearch_lst(vector<int>& arr, int n, int k){
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            s = mid+1;
        }
        else if(k<=arr[mid]){
            e = mid -1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    vector<int> arr = {1,2,3,6,6,6,6,6,6,9,10,44};
    int k =6;
    auto p = make_pair(binarySearch(arr, arr.size(), k),binarySearch_lst(arr, arr.size(), k));
    cout << "First Occurence " << p.first<<endl;
    cout << "Last Occurrence " << p.second;
    return 0;

}