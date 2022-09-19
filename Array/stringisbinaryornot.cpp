#include<bits/stdc++.h>
using namespace std;

int main(){
    string st1[]={'0','1','1','1','0','1','0','1','\0'};
    int i;
    for(int i = 0; i < st1.length(); i++){
        if((char(st1[i]) != '0') || (char(st1[i]) != '1') ){
            int i=0;
            break;
        }
        else{
            i=1;
        }
    }
    return i;
}
