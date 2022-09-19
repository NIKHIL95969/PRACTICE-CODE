#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	// map<int, int> mp;
    // mp[1] ={'1', '0'};
    // mp[2] = {2,0};
    int arr1[2] = {1,0};
    int arr2[2] = {2,0};
	while(n--){
	    int p1 , p2;
	    cin >> p1 >> p2;
	    if(p1>p2){
            int a = p1-p2;
            int s = arr1[1];
	        if( a > s){
                arr1[1] = a;
            }
	    }
         if(p2>p1){
            int a = p2-p1;
            int s = arr2[1];
	        if( a > s){
                arr2[1] = a;
            }
	    }
	    
	}
	if (arr1[1]>arr2[1])
    {
        cout << arr1[0] <<" " << arr1[1]<<endl;
    }
    else
    {
        cout << arr2[0] <<" " << arr2[1]<<endl;
    }
    
    
	
	return 0;
}
