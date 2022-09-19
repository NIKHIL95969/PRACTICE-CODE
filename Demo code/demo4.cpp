#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while(t--){
	    int x, y;
	    cin >> x >> y;
	    
	    vector<int> arr;
	    for(int i=1 ; i<=x; i++ ){
	        if(x/i==0){
	            arr[i-1]=i;
	        }
	    
	    }
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        
	}
	
	return 0;
}