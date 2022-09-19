#include <bits/stdc++.h>
using namespace std;


int main() {
    int arr[5] = {5,6,8,9};
    int k = 3;


    int r = k;
    for(int i=0; i<5; ++i)
    {

        //int (arr[i--]
        if(i<k){
            //k--;
            --r;
            cout << arr[r] << " ";
        }
        // else if(i>=k)
        // {
        //     cout << arr[i] << " ";
        // }
            
    }

    return 0;
}