#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            
            for (int j = 0; j < n; j++)
            {
                cout << "n";
            }
            for (int k = 0; k < i; k++)
            {
                cout << " ";
            }
            for (int l = 0; l < n; l++)
            {
                cout << "n";
            }
            for (int m = n-i; m > 1; m--)
            {
                cout << " ";
            }
            for (int o = 0; o < n; o++)
            {
                cout << "n";
            }
            cout <<endl;
            
        }
        
    }
    
    return 0;
}