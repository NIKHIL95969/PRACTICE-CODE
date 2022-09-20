#include<bits/stdc++.h>
using namespace std;
int firstOcc(int arr[], int n, int k){
    int ans = -1; int s =0;
    int e = n-1;
    int mid = s + (e-s)/2;
    
    while (s<=e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid -1;
        }
        if (k > arr[mid]) // go to right side of array
        {
            s = mid+1;
        }
        if(k < arr[mid])
        {
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int k){
    int ans = -1; int s =0;
    int e = n-1;
    int mid = s + (e-s)/2;
    
    while (s<=e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        if (k > arr[mid]) // go to right side of array
        {
            s = mid+1;
        }
        if(k < arr[mid])
        {
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    int arr[8] = {1,3,3,3,3,3,6,7};
    int first = firstOcc(arr, 8  , 3);
    int last = lastOcc(arr, 8  , 3);
    // Total Occurrence of any number using binary Search
    // Total Occ = (lastOcc - fistOcc)+1 
    cout << "Total Occurrence of number 3 is : " <<(last-first) +1 <<endl;
    return 0;

}