#include<bits/stdc++.h>
using namespace std;
const int N = 100000000;
int arr[N];

int main(){
    int n;
    //cout << sizeof(arr);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[a]++;
    }
    int t;
    cout << "Enter number of  query "<< endl;
    cin >> t;
    while (t--)
    {
        int q;
        cin  >> q;
        cout << "Count of "<< q << " is " <<  arr[q] << endl;;

    }
    
    return 0;
}