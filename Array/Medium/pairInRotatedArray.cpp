#include <iostream>
#include <unordered_map>
using namespace std;



int main()
{
	// initialize array and variables
	int arr[] = { 11, 15, 6, 8, 9, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 16;
	
    int flg = 0;
    unordered_map<int,int> mp;
    for(int i = 0; i<n; i++){
        if(mp[arr[i]]){
            cout << "True" << endl;
            flg=1;
            break;
        }
        mp[x-arr[i]] = arr[i];
    }
    // mp[1]++;
    // cout << mp[1] << endl;
    if(flg==0) cout << "False" << endl;
	return 0;
}
