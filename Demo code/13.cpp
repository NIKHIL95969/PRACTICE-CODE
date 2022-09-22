#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while(t--){
	    int n;
	    string str;
	    cin >> n;
	    cin.ignore();
	    getline(cin, str);
	    int ans=0;
	    for (int i = 0; i< n; i++) {
            if(str[i] == '+'){
                ans= ans + str[i+1];
                i++;
            }
            if(str[i]=='-'){
                ans = ans-str[i+1];
                i++;
            }
            else{
                ans = ans+str[i];
            }
	    }
	    cout << ans <<endl;
	}
	
	return 0;
}
