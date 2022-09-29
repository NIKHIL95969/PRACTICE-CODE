#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    string str;
	    cin>>str;
	    long long m = str.size();
        cout << m <<endl;
	    int lc = 0,uc = 0,sc = 0,dg = 0;
	   
	    for(long long i=0;i<m;i++){
	           
	       if(islower(str[i])){
	            lc = 1;
	       }
	    }
	        
	    for(long long i=1;i<m-1;i++){
	        if(isupper(str[i])){
	                uc = 1;
	        }
	        if(isdigit(str[i])){
	               dg = 1;
	        }
	        if(str[i] == '@' || str[i] == '#' || str[i] == '%' || str[i] == '&' || str[i] == '?'){
	           sc = 1;
	        }
	    }
	    if(lc == 1 && uc == 1 && dg == 1 && sc == 1 && m >=  10){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
