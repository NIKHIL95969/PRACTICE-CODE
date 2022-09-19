#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        int c = 0;
        // x,y,z is checked
        for(int i = 0 ; i < 3; i++){
            if(a[i]){
                c++;
                a[i] -= 1;
            }
        }
        sort(a, a + 3, greater<int>());
        int x = a[0], y = a[1], z = a[2];
        // (x,y) and (x,z) is checked
        if(x >= 1 and y >= 1){
                c++;
                y--;
                x--;
        }
        if(z >= 1 and x >= 1){
                c++;
                z--;
                x--;
            }
        // (y,z) is checked
        if(z >= 1 and y >= 1){
                c++;
                y--;
                z--;
            }
        //cout<<"X:"<<x<<" "<<"Y:"<<y<<" "<<"Z:"<<z<<endl;
        cout<<c<<endl;
    }
}