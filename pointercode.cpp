#include <bits/stdc++.h>
using namespace std;
 

int main()
{
    int x = 6;
    cout << "Add of x : "<< &x << endl;
    int *p = &x;
    cout << "Value at &x : "<< *p << endl;
    cout << "x adress at *p : " << p << endl;

    int **pp = &p;
    //cout << **pp << endl;
    //**pp = 100;
    cout <<"*p address at **pp: " << *pp << endl;

    int ***ppp = &pp;
    cout << "**pp address at  ***ppp : " << **ppp << endl;
    cout <<"Adress of ppp :"<<ppp << endl;
    // *p = 5;
    // cout << p<< endl;
    //int ;

}