//https://www.codechef.com/SEP221D?order=desc&sortBy=successful_submissions
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while(t--){
	    int s;
	    cin >> s;
	    int arr[s];
	    for(int i = 0; i< s; i++){
	        cin >> arr[i];
            //cout << "done";

	    }
        sort(arr, arr + s);
        for(int i = 0; i< s; i++){
	        cout << arr[i]<< " ";
	    }
	}
	
	return 0;
}