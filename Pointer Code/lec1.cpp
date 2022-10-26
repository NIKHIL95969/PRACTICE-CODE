#include<iostream>
using namespace std;

int main(){
    int i =8;
    // int *ptr = &i;
    // cout << i << " "<< &i << endl;
    // cout << ptr <<endl;
    // cout << *ptr << endl;
    // cout << (*ptr)++ << endl;
    // cout << ++i << endl;
    // cout << "double pointer" << endl;
    // int **pt = &ptr;
    // cout << "Add 2pt = " << pt << endl;
    // cout << "Add &pt = " << &pt << endl;
    // cout << "add of 2pt = " << *pt << endl;
    // cout << "val at pt = " << **pt << endl;
    // cout<< endl;
    // cout << "triple pointer " << endl;
    // int ***pte = &pt;
    // cout << "Val at 3pte = " << ***pte <<endl;
    // cout << "Val at pte = " << **pte <<endl;
    // cout << "Val at pte = " << &pte <<endl;
    // cout << endl;
    cout << "copy of the pointer : "<<endl;
    int  *x = &i;
    int *q = x;
    cout << x << " - " << q << endl;
    cout << *x << " - " << *q<<endl;
    cout << &x << " - " << &q << endl;
    int **xd = &q;
    int **md = xd;
    cout << xd << " - " << md << endl;
    cout << *xd << " - " << *md <<endl;
    cout << **xd << " - " << **md <<endl;
    return 0;
}