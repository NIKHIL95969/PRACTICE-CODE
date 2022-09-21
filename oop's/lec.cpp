#include<iostream>
using namespace std;

class Student
{
    public:
    int sub1 =50;
    int sub2 = 60;
    int sub3 = 70;
    int avg()
    {
        int ans = (sub1+sub2+sub3)/3;
        return ans;
    }
    int high()
    {
        int  ans ;
        if (sub1>sub2 && sub1>sub3)
        {
            return sub1;
        }
        else if (sub2>sub1 && sub2>sub3)
        {
            return sub2;
        }
        else
        {
            return  sub3;
        }
    }
};

int main(){
    Student obj;
    cout << "Enter the marks of 3 sub :" <<endl;
    cin >> obj.sub1 ; cin >> obj.sub2; cin >> obj.sub3;

    cout << "Hi Nikhil your average marks is " << obj.avg()<<endl;
    cout << "Highest marks is " << obj.high()<<endl;
   return 0;
}