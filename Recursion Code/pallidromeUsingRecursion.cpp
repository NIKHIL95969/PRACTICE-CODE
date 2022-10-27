#include<bits/stdc++.h>
using namespace std;
bool reverse(string& arr, int i ){
    cout << arr <<endl;
    if (i>arr.length()-i-1)
    {
        return true;
    }
    if(arr[i] != arr[arr.length()-i-1]) return false;
    i++;

    return reverse(arr, i);
    //return true;
}
int main(){
    string arr = "kaacaafaak";
    if (reverse(arr, 0))
    {
        cout <<"Pallidrome "<<endl;
    }
    else{
        cout <<"Not Pallidrome"<< endl;
    }
    
    return 0;
}