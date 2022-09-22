#include <bits/stdc++.h>
using namespace std;

void sortString(string &str)
{
   sort(str.begin(), str.end());
   //cout << str;
}
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n; cin >>n;
	    cin.ignore();
	    string arr;
        getline(cin , arr);
	    if(n==2 || n==1){
            cout << arr <<endl;
            continue;
        }
        
        else{
            sortString(arr);
        }
        cout << arr<<endl;
	}
	
	return 0;
}
