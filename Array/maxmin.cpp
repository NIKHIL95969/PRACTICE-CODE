#include <bits/stdc++.h>
using namespace std;
// stuct pair{
//     int min;
//     int max;
// };
int minmax(int *arr, int n){
    //struct pair minmaxx;
    int max, min;
    // vector< pair<int, int>> v;
    // if (n==1)
    // {
    //     v.push_back(make_pair<arr[0], arr[0]>);
    //     return vector;
    // }
    if (arr[0]>arr[1])
    {
        max = arr[0];
        min = arr[1];
    }
    else{
        max = arr[1];
        min = arr[0];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        if (arr[i]<min)
        {
            min = arr[i];
        }
        
        
    }
    cout << max << " " << min << endl;
    // v.push_back(make_pair<max, min>);
    // return v;
    
}
int main() {
	int arr[5] = {3,4,2,1,0};
      minmax(arr, 5);
    //  vector< pair<int, int>> v={minmax(arr, 5)};
    //  cout << v.first << " "
    //          << v.second << endl;
	return 0;
}