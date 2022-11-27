#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	while(t--){
	    int n;
        cin >> n;
	    // int a[n];
        vector<int> a;
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    for (int i = 0; i < n; i++) {
	        cout<< a[i] << " ";
	    }
	    int i = 0;
	    int e = n-1;
	    int cnt =0;
	    while(i<e){
	        if(a[i]==a[e]){
	            i++;e--;
	        }
	        else if(a[i]>a[e]){
	            a[i] = a[i]-a[e];
	            cnt++;e--;
	        }
	        else{
	            a[e] = a[e]-a[i];
	            cnt++;i++;
	        }
	       
	    }
	    cout << cnt << endl;
	    
	}
	
	return 0;
}
// if(a[i]<a[e]){
	       //     int x = a[i];
	       //     int y = a[e]-a[i];
	       //     a.insert(a.begin()+e,y);
	       //     a.insert(a.begin()+e+1,x);
	       //     i++;
	       //     cnt++;
	       // }
	       // else if(a[i]>a[e]){
	       //     int x = a[e];
	       //     int y = a[i]-a[e];
	       //     a.insert(a.begin()+i,y);
	       //     a.insert(a.begin()+i,x);
	       //     cnt++;
	       // }
	       // else{
	       //     i++;e--;
	       // }