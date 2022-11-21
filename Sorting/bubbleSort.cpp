#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {3,6,1,0,-1,31,-4,30,15};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Bubble Sort 
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[i])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // best case = O(n) array is already sorted
    // worst case = O(n^2)
    // stable algorithms

    return 0;
}