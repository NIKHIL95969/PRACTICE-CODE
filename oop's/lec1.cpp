#include<iostream>
using namespace std;

class check
{
    int a;
    int psw = 124;
    public:
    void setpsw(int newpsw){
        if (a == psw)
        {
            psw=newpsw;
            cout << "Changed" <<endl;
        }
        else
        {
            cout << "Not Changed : "<<endl;
        }
        
        
    }
    void seta(int prePsw){
        a = prePsw;
    }
    int getpsw(){
        return psw;
    }
};

int main(){

    check obj;
    obj.seta(124);
    obj.setpsw(126789 );
    cout << obj.getpsw() <<endl;
   return 0;
}