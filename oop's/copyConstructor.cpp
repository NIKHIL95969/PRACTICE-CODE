#include<iostream>
using namespace std;

class learn{
    int a;
    int b;
    public:

    learn(int a, int b){
        this->a = a;
        this->b = b; 
    }
    learn(learn& temp){
        this->a = temp.a;
        this->b = temp.b;
    }
    void getout(){
        cout << "a = "<< a << endl;
        cout << "b = "<< b << endl;

    }

};

int main(){
    learn values(3,6);
    values.getout();
    cout << "copy constructor :" << endl;
    learn dd(values);
    values.getout();

    return 0;
}