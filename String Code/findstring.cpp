#include <bits/stdc++.h>
using namespace std;

bool solve(char p, char s){
    //int sw =  s.size();
    char cek[] = "";
    int st = 0;
    int j = 0;
    while (j<=p.length())
    {
        if(strcmp(cek,s)==0){
            return 1;
        }
        if(j-st+1<=s.length())
        {
            cout << cek << endl;
            cout << "ck++ ";
            cek += p[j++];
        }
        else
        {
            cout << cek << endl;
            cout << "ck-- ";
            int  i =0;
            while (i<cek.length())
            {
                cek[i] = cek[i+1];
                i++;
            }
            st++;
        }
        
    }
   return 0; 
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    string fst;
        string snd;
	    cin >> fst >> snd;
        char p[]=p; 
	    char s[]=s;
        cout << p << " "<< s;
        
	    cout << solve(p,s) << endl;
	}
	
	return 0;
}
