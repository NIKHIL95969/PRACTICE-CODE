#include <iostream>
using namespace std;
int main() 
{ 
    int t;
    cin>>t;
    while(t--) 
    { 
        long long n; 
        long long s; 
        cin>>n>>s; 
        int diff; 
        if(s<=n) 
        { 
            diff=s; 
            
        } 
        else
        { 
            diff=(n-s)+n; 
        } 
        cout << diff << endl;
    }
    return 0;
}