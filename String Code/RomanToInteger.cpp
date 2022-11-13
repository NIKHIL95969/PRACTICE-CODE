#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
    //map<char, int> mp; 
    vector<int> v{0};
    v[int('I')] = 1;
    v[int('V')] = 5;
    v[int('X')] = 10;
    v[int('L')] = 50;
    v[int('C')] = 100;
    v[int('D')] = 500;
    v[int('M')] = 1000;
    int ans = 0;

    for(int i = 0; i<s.length(); i++){
        if(s[i]=='I'){
            if((s[i]=='I' && s[i+1]=='V') ){
                ans += 4;i++;
            }
            else if((s[i]=='I' && s[i+1]=='X')){
                ans += 9;i++;
            }
            // else{
            //     ans += (v[s[i]]);
            //     continue;
            // }
        }
        else if(s[i]=='X'){
            if((s[i]=='X' && s[i+1]=='L') ){
                ans += 40;i++;
                i++;
            }
            else if((s[i]=='x' && s[i+1]=='C') ){
                ans += 90;i++;
            }
        }
        else if(s[i]=='C'){
            if((s[i]=='C' && s[i+1]=='D') ){
                ans += 400;i++;
            }
            else if((s[i]=='C' && s[i+1]=='M') ){
                ans += 900;i++;
            }
        }
        ans += (v[s[i]]);
    }
    return ans;
}

int main(){
    string s;
    getline(cin, s);

    cout << romanToInt(s);

    return 0;
}