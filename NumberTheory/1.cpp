#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    if(a+b==c) cout << "Yes" << endl;
	    else if(a+b!=c){
	        int fl = 0;
	        for (int i = 0; i < 10; i++) {
	            int a1 = a, b1 = b, c1 = c;
                a1 = a1^i; b1 ^=i; c1^=i;
                if(a1+b1==c1){
                    fl = 1;
                    cout << "Yes" << endl; break;
                }
	        }
	         if(fl ==0) cout << "No" << endl;
	        
	    }
	   // else{
	   //     cout << "No" << endl;
	   // }
	}
	
	return 0;
}
