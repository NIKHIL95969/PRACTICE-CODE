#include<bits/stdc++.h>
using namespace std;

class interest{
    private:
    float p_amount;
    float rate;
    float period;
    float interest;
    float t_amount;

    public:
    void in(){
        cout << "Principle Amount :"; cin >> p_amount;
        cout << "Rate of Interest :"; cin >> rate;
        cout << "Number of year : "; cin >> period;
        interest = (p_amount*period*rate)/100;
        t_amount = interest+p_amount;
    }
    void show(){
        cout << "\nPrinciple Amount :" <<  p_amount;
        cout << "\nRate of Interest :"<< rate;
        cout << "\nNumber of year :" << period;
        cout << "\nInterest :" << interest;
        cout << "\nTotal Amount :" << t_amount;
    }
};


int main(){

    interest r;
    r.in();
    r.show();
    return 0;
}