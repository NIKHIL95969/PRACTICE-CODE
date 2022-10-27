#include<bits/stdc++.h>
using namespace std;
void reverse(string& arr, int i ){

    if (i>arr.length()-i-1)
    {
        return;
    }
    char temp = arr[i];
    arr[i] = arr[arr.length()-i-1];
    arr[arr.length()-i-1] = temp;
    i++;
    return reverse(arr, i );
    
}
int main(){
    string arr = "Nikhil";
    cout << "answer is "<< endl;
    reverse(arr, 0);
    for (int i = 0; i < arr.length(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}