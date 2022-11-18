#include<bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;
    int mount = -1;
    
    while(start<=end){
        if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1]){
            return mid;
        }
        if(arr[mid]<arr[mid+1]){
            start = mid;
        }
        else if(arr[mid]>arr[mid+1]){
            end = mid;
        }
        
        mid = start+(end-start)/2;
    }
    return -1;
}
int main(){

    vector<int> arr = {1,3,3,4,6,9,10,5,3,1,0};
    
    cout << "Mountain is "<< peakIndexInMountainArray(arr)<<endl;

    return 0;
}