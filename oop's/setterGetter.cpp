#include<iostream>
using namespace std;

class learn{
    public:
    string user ;
    int health=-1;
    public:
    int level=-1;
    string input;
    void getter(){
        cout << "Health is : " << health << endl;
        cout << "level is : " << level << endl;
    }
    void setter(){
        int a,b;
        cout << "Enter user name : " ;
        getline(cin, input);
        if (input==user)
        {
            cin >>a>>b;
            health = a;
            level = b;
        }
        else
        {
            cout << "Not a user" << endl;
        }
    }

};

int main(){
    learn values;
    cout << sizeof(values);
    // values.setter();
    // values.getter();
    return 0;
}