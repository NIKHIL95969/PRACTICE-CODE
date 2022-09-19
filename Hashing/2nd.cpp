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
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    sort(arr, arr+n);
	    int c[n] = {0};
	    int j = 0;
	    for (int i = 0; i < n && j<n; i++) {
	        if(arr[i]==arr[i+1]){
	            c[j]=c[j]+1;
	        }
	        else if(arr[i]<arr[i+1]){
	            c[j]++;
	            j++;
	        }
	    }
        for (int i = 0; i < n; i++)
        {
            cout << c[i] << " ";
        }
        cout <<endl;
        
	    int max = 0;
	    for (int i = 0; i < n; i++) {
	        if(max<c[i]){
	           max = c[i];
	        }
	    }
	    cout << n-max <<endl;
	}
	
	return 0;
}
