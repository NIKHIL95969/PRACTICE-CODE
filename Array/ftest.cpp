#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    set<int> s;
		int a;
	    for(int i= 0; i<n ; i++){
			cin >> a;
	        s.insert(a);
	    }
	    cout << s.size()<< endl;
	}
	return 0;
}