#include<bits/stdc++.h>
using namespace std;

// function to print array
void printarr(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// function to sort the arry
void sort01(int *arr, int n){
    int left = 0;
    int right = n-1;
    while (left<right)
    {
        if(arr[left]==1 && left < right){
            left++;
        }
        if (arr[right]==0 && left < right)
        {
            right--;
        }
        if (arr[left]!=arr[right] && left < right)
        {
            swap(arr[left], arr[right]);
        }
        
        
    }
    
}

int main(){
    int arr[10] = {1,0,1,0,0,0,1,1,1,0};
    sort01(arr, 10);
    printarr(arr, 10);
    return 0;
}