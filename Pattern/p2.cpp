#include<bits/stdc++.h>
using namespace std;

int main(){
  
    for (int  i = 1; i <= 3; i++)
    {
        //cout << " ";
        for (int j = 3; j >i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2*i)-1 ; j++)
        {
            cout << "*";
        }
        cout <<endl;
        
    }
    int s = 0;
    for (int  i = 1; i < 3; i++)
    {
        //cout << " ";
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 3; j >= i+s; j--)
        {
            cout << "*";
        }
        s++;
        cout <<endl;
        
    }
    
    
    return 0;
}