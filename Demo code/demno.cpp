#include<bits/stdc++.h>
using namespace std;

int fact(int n){
	
	if (n == 0)
	{
		return 0;
	}
	else{
		int sum = 0;
		int a = n%10;
		sum = sum+a*a*a;
		//n = n/10;
		return (sum + fact(n/10));
	}
}

int main(){
	int x;
	cin >> x;
	//cout << fact(x);
	if (fact(x)==x)
	{
		cout << "amstronge" << endl;
	}
	else{
		cout<< "Not amstronge"<< endl;
	}
	return 0;
}