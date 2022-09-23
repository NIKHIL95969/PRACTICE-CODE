#include <bits/stdc++.h>
using namespace std;
// bool check(int a, int b, int x){
//     int s1,s2;
//     if ((s1 == b  && s2 ==a) || (s1 = a && s2 ==b))
//     {
//         return 0;
//     }
    
//     if(a==b){
//         return 1;
//     }
//     if (a>b)
//     {
//         a = a-x;
//         b = b+x;
//         int s1 = a; int s2 =b;
//         return check(a , b ,x);
//     }
//     else if(a<b){
//         a = a+x;
//         b = b-x;
//         int s1 = a; int s2 =b;
//         return check(a , b ,x);
//     }
    
//     return 0;

// }
int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while(t--){
	    long long int a, b, x;
	    cin >> a >> b >>x;
        
	    if(a==b){
	        cout << "Yes" <<endl;
	    }
	    else if((abs(a-b)==x) && x==1){
	        cout << "Yes" <<endl;
	    }
	    else if((a%2==1 && b%2==1 && x%2==1) || (a%2==0 && b%2==0 && x%2==0)){
	        cout << "Yes" <<endl;
	    }
	    else{
            int temp = check(a,b,x);
            cout << "No" << endl;
	        cout << temp;
	    }
	}
	
	return 0;
}
