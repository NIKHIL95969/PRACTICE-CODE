#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    long long int arr[n];
	    long long int s2 = n/2;
	    long long int arr2[s2];
	    long long int result[n];
	    long long int j = 0; long long int k =0; long long int s = 0;
	    if(n==2 || n==3 || n==4){
	        cout << "-1" <<endl;
	    }
	    else{
	        for (int i = 1; i <= n; i++) {
	            if(i%2==1){
	                arr[j] = i;
	                j++;
	            }
	            else if(k < s2){
	                arr2[k] = i;
	                k++;
	            }
	        }
            
            
	        for (int i = 0; i < n; i++) {
                if(i<(n-s2)){
                    result[i] = arr[i];
                }
                else if(s<s2){
                    result[i] = arr2[s];
                    //cout << result[i] <<endl;
                    s++;

                }
	        }
	        for (int i = 0; i < n; i++) {
	            cout << result[i] << " ";
	        }
	    }
	}
	
	return 0;
}
