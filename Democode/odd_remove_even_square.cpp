#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr;
    cout << "Enter the number " << endl;
    for (int i = 0; i < 10; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }

    int j = 0;
    for (int i = 0; i < 10; i++)
    {
        if(i%2!=0){
            arr[j++] = (arr[i]*arr[i]);
        }
        else
        
    }

    arr.erase(arr.begin()+5, arr.end());

    for (int i = 2; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}