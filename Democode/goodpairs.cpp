#include <bits/stdc++.h>
//#include <boost/math/common_factor.hpp>
using namespace std;
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main() {
	// your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int size;
	    cin >> size;
	    long int arr[size];
	    for(int i=0; i<size; i++){
	        //long long int=
	        cin >> arr[i];
	    }
	    int j=0;
	    int count =0;
	    for(int i=1;i<size; i++){
	        for(int j=i+1; j<=size; j++){
    	        int a = gcd(i,j);cout << a<<endl;
    	        int b = lcm(i,j);cout << b<<endl;
    	        if(a==b){
    	            count++;
    	        }
	        }
	        
	    }
	    cout << count <<endl;
	}
	return 0;
}
