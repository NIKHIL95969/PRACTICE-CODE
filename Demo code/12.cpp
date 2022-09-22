#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while(t--){
	    int a, b;
	    cin >> a >>b;
	    if((a==1 || b==1 ) || a==1 && b==1){
	        cout << "No"<<endl;
            continue;
	    }
	    if(a%2==1 && b%2==1){
	        cout << "No" <<endl;
	    }
	    else{
	        cout << "Yes" <<endl;
	    }
	}
	
	return 0;
}
