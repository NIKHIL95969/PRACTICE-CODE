#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin , str);
    string rev_Str;
    for (int i = str.size()-1; i>=0 ; i--)
    {
        rev_Str.push_back(str[i]);
    }
    cout << rev_Str <<endl;
    
    
    return 0;
}