#include<bits/stdc++.h>
using namespace std;

class access{
    private:
    int p;

    void getp(){
        cout <<" In pget() enter value of P :";
        cin >> p;
    }
    public:
    int h;

    void geth(){
        cout << "Before" << "P = " << p << "  h = "<< h<< "  m = " << m <<endl;
        cout <<" In geth() enter value of h :";
        cin >> h; 
        getp();
        getm();
        
        cout << "After" << "P = " << p << "  h = "<< h<< "  m = " << m <<endl; 
    }

    protected:
    int m;
    void getm(){
        cout <<" In getm() enter value of m :";
        cin >> m;
    }
};


int main(){
    access a;
    a.h=6;
    a.geth();
    return 0;
}