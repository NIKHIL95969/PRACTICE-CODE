#include<bits/stdc++.h>
using namespace std;
int binaryS(int arr[], int n, int k){

    int s =0;
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
int main(){
    int arr[8] = {1,2,3,4,5,6,7,10};
    cout << "Element 3 is present at index " << binaryS(arr, 8, 3)<<endl;
    return 0;

}