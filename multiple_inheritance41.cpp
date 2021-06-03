#include<iostream>
using namespace std;
class base1
{
protected:
int int_num1;
public:
void set_num1(int a)
{
    int_num1=a;
}
};
class base2
{
protected:
int int_num2;
public:
void set_num2(int b)
{
    int_num2=b;
}
};
class derived: public base1,public base2
{
    public:
    void show()
    {
       cout<<"the first number is : "<<int_num1<<endl;
       cout<<"the second number is : "<<int_num2<<endl;
       cout<<"the product is : "<<int_num1*int_num2<<endl;


    }


};
/*
!!!!!!!!!!!!!!!!!!!we can do multilple inheritance for n base class!!!!!!!!!!!!

The inherited derived class will look something like this:
Data members:
    int_num1--> protected
    int_num2--> protected

member functions :
               set_num1()--->public
               set_num2()--->public
                  show()--->public
*/
int main()
{
    derived d;
    d.set_num1(4);
    d.set_num2(5);
    d.show();

    return 0;
}