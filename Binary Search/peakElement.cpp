#include<bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int n){

    int s =0;
    int e = n-1;
    int mid = s + (e-s)/2;
    
    while (s<e)
    {
        if (arr[mid]<arr[mid+1])
        {
            s = mid +1;
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
    int arr[8] = {1,2,3,10,5,2,1,0};
    cout << "Peak Element is at index " << peakElement(arr, 8)<<endl;
    return 0;

}