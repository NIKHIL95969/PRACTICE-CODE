#include <bits/stdc++.h>
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
	//your code goes here
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int size;
	    cin >> size;
	    int arr[size];
	    for(int i=0; i<size; i++){
	        cin >> arr[i];
	    }
	    
	    int count =0 ;
	    for(int i=0;i<size; i++){
	        for(int j=i+1; j<size; j++){
    	        int a = gcd(arr[i],arr[j]);
    	        int b = lcm(arr[i],arr[j]);
    	        if(a==b){
    	            count++;
    	        }
                
	        }
	        
	    }
	    cout << count <<endl;
	    
	}
	return 0;
}
