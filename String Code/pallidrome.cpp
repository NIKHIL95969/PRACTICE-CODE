#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin , str);
    string rev_Str;
    // for (int i = str.size()-1; i>=0 ; i--)
    // {
    //     rev_Str.push_back(str[i]);
    // }
    // cout << rev_Str <<endl;
    int i =0;
    int j = str.size()-1;
    int f = 1;
    while (i<j)
    {
        cout << str[i] << " " << str[j]<<endl;
        if(str[i]!=str[j]){
            f = 0;
        }
        i++; j--;
    }
    if (f){
        cout << "pallidrome" <<endl;
    }
    else{
        cout << "Not pallidrome" <<endl;
    }
    
    
    
    return 0;
}