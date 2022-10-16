#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while(t--){
	    long long int n,m;
	    cin >> n >> m;
	    long long int arr[n];
	    long long int c = m/2;
	    long long int ans = 0;
	    for(int i =0; i<n; i++){
	        cin >> arr[i];
	        
	    }
	   for(int i =0; i<n; i++){
	       unsigned int d = m-arr[i];
	        if( d>=c){
	            arr[i] = m-arr[i];
	        }
	        else{
	            arr[i] = arr[i]-1;
	        }
	        ans = ans+arr[i];
            //ans = ans + max( abs(arr[i]-1), abs(arr[i] -m));
	   }
	    cout << ans <<endl;
	}    
	
	return 0;
}