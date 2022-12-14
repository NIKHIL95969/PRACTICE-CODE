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
int main(){
    int arr[6] = {1,2,6,9,10,44};
    cout << "Pivot is present at index " << pivotArr(arr, 6)<<endl;
    return 0;
}