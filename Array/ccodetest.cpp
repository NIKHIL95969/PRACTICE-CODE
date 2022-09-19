#include <bits/stdc++.h>
using namespace std;

int pow(int x,  int y){
    if (y == 0)
    {
        return 1;
    }
    if ( y == 1 )
    {
        return x;
    }
    else{
        return x*pow(x, y--);
    }
}
int main(){
     int n , d;
     cin >> n >> d;
     int c = pow(n , d);
     cout << c;
     return 0;
 }