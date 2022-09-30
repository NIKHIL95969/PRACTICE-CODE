#include <bits/stdc++.h>
using namespace std;


int main() {
	int arr[5] = {3,4,2,1,0};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] <<" ";
    }
    cout << endl;
    stack<int> s;
    for (int i = 0; i < 5; i++)
    {
        s.push(arr[i]);
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    
    
    
	return 0;
}