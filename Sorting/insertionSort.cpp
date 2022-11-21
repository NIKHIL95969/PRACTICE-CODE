#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {3,6,1,0,-1,31,-4,30,15};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Bubble Sort 
    for (int i = 1; i < n-1; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for (j; j>=0; j--)
        {
            if (arr[j]>temp)
                arr[j+1] = arr[j];
            else
                break;
        }
        arr[j+1] = temp;
    }
    // best case = already sorted O(n)
    // Average,worst case = O(n^2)
    // Worst case space cmoplexity = O(1)
    // stable algorithms
    
    // print sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<< endl;
 
    return 0;
}