#include<bits/stdc++.h>
using namespace std;
// const int N = 1e7+10;
// int arr[N];

int main(){
	
	int t;
	cin >> t;
	while(t--)
	{
	    long long int a, k,i;
	    cin >> a >> k;
	    vector<int> arr(a+1);
	    for (i = 1; i <= a; ++i)
	    {
	    	cin >> arr[i];
	    }
	    int max=arr[0];
	    for(long long int i=1;i<=a;++i){
	        if(max<arr[i]){
	            max=arr[i];
	        }
	    }
	    long long int count=0;
    	for(long long int i=k ; i<a+1 ;i++)
	    {
	        if(max==arr[i])
	        {
	            count = count+a-i+1;
	        }
	    }
	    cout << count << endl;
	}


	return 0;
}