#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int* arr, int s, int e, int key){
    if (s>e) return false;
    int mid = s+(e-s)/2;
    if(arr[mid] == key) return true;
    if (key > arr[mid])
    {
        return binarySearch(arr, mid+1, e, key);
    }
    else{
        return binarySearch(arr, s , mid-1, key);
    }
}


int main(){
    int arr[5] = { 1,5,6,7,8};
    cout << "answer is " << binarySearch(arr, 0, 4, 5)<< endl;
    cout << "Done" <<endl;
    return 0;
}