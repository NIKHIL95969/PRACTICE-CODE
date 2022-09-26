#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[7] = {7, 3, 2, 4, 9, 12, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    sort(arr, arr+n); // sort the array
    // for printing the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }

    int min = INT_MAX;
    //  find min difference
    for (int i = 0; i < n-1; i++)
    {
        int temp = arr[(i+1)];
        if (temp<min)
        {
            min = temp;
        }
        
    }
    cout << endl;
    cout << min <<endl;
    return 0;
}