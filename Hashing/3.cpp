#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	        
	    }
	    sort(arr, arr+n);
	    int min = arr[0];
	    int max = arr[n-1];
	    if(min==0){
	        cout << min*min<< " "<< max*max<<endl;
	    }
	    else if(min<0 && max>0){
	        if(abs(min)>max){
	            cout << min*max << " " << min*min;
	        }
	        else{
	            cout << max*min<< " "<< max*max<<endl;
	        }
	    }
	    else if(max<0){
	            cout << max*max << " " << min*min;
        }
        else{
            cout << min*min<< " "<< max*max<<endl;
        }
	    
	    
	}
	
	return 0;
}
