#include <bits/stdc++.h>
using namespace std;

void reverseAr(int arr[], int n){
    int  s =0;
    int e = n-1;
    while (s<e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        
        s++; e--;
    }
    
}
int main() {
	int arr[5] = {3,4,2,1,0};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] <<" ";
    }
    cout << endl;
    reverseAr(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] <<" ";
    }
    
	return 0;
}