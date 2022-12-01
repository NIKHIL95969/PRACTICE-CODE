#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    
	//     if(a!=0 and b!=0 and c!=0){
    //         int d = a^b; cout << d << endl;
    // 	    if(d==c ) cout << "Yes" << endl;
    // 	    else if(a==c || b==c) cout << "Yes" << endl;
    // 	    else cout << "No" << endl;
	//     }
	//    // else if()
	//     else{
	//         if((a==0 and b==c) || (b==0 and a==c)) cout << "Yes l2" << endl;
	//         else cout << "No l2" << endl;
	//     }
        if(a+b>=c) cout << "Yes" <<endl;
        else cout << "No" <<endl;
	}
	
	return 0;
}