#include<bits/stdc++.h>
using namespace std;

// to find the pivot in an array
int pivotArr(int arr[], int n){

    int s =0;
    int e = n-1;
    int mid = s + (e-s)/2;
    
    while (s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s = mid+1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
int binaryS(int arr[],int s, int n, int k){

    //int s =0;
    int e = n-1;
    int mid = s + (e-s)/2;
    
    while (s<=e)
    {
        if (arr[mid] == k)
        {
            return mid;
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
    return -1;
}
int Search(int arr[] , int n, int k){
    int ans = -1;
    int p = pivotArr( arr, n); //for finding pivot of rotated array
    
    if (arr[p]<= k && k<=arr[n-1])
    {
        cout << "done";
        ans = binaryS(arr, p , n ,k); // binary search on right side of rotated array
    }
    else
    {
        ans = binaryS(arr , 0, p ,k);// left side of rotated array ex: {8, 7, 10 , 1 , 3}
    }
    return ans;
}
int main(){
    int arr[5] = {8, 7, 10 , 1 , 3};
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        cout << k << " is present at index " << Search(arr, 5, k)<<endl;
    }
    return 0;
}