#include <iostream>
using namespace std;
const int N = 1e5;
long long arr[N];
int main() {
	// your code goes here
	int a ;
	cin >> a;
    arr[0]=0; arr[1]=1;
    int j = 2;
	//for (int i = arr[i]; i <=a ; i++) {
    int i = 2;
    while (arr[i-1]<=a )
    {
    
        arr[i] = arr[i-1]+j;
        j++;

	    if(j>3){
	        j=1;
	    }
	
    }

    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
    
	cout << arr[0] <<endl;
	return 0;
}
