#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {3,6,1,0,-1,31,-4,30,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        int minV = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[minV]>arr[j])
            {
                minV = j;
            }
        }
        swap(arr[i],arr[minV]);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}