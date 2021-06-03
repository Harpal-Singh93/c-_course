#include<iostream>
using namespace std;
class A{
    int a;
    public:
    /////////////////////use no.1 of this pointer /////////////
//     void setdata(int a)
//     {
// //  a=a;          to work this statement this is one use of this pointer
// this->a=a;
//      }

// void getdata(void)
// {
// cout<<"the value of a is "<<a<<endl;
// }

///////////////////////////use no.2 of this pointer////////////////////
A &setdata(int a)
{
this->a=a;
return *this;
}
A &getdata(void)
 {
     a++;
     cout<<"the value of a is "<<a<<endl;
     return *this;
 }


};
int main()
{
A d;
// d.setdata(4);
// d.getdata();

// chaining of calls
d.setdata(4).getdata();
    return 0;
}