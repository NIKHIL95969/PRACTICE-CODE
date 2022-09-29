#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    //cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        int ln = s.length();
        cout << ln <<endl;
        int low = 0;
         int Uch=0;
        int num = 0;
        int sp =0;
        for (int i = 0; i < ln; i++)
        {
            if (islower(s[i]))
            {
                low = 1;
            }
            
        }
        for (int i = 1; i < ln-1; i++)
        {
            if (isupper(s[i]))
            {
                Uch = 1;
            }
            if (isdigit(s[i]))
            {
                num = 1;
            }
            if(s[i]=='#' || s[i]=='@' || s[i]=='%' || s[i]=='&' || s[i]=='?')
            {
                sp = 1;
            }
            
        }
        if(low>0 and Uch>0 and num>0 and sp>0 and ln >=10){
            cout<< "Yes" <<endl;
        }
        else
        {
            cout<< "No" <<endl;
        }
        
        
    }
    
    return 0;
}