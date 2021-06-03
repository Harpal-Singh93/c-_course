#include<iostream>
using namespace std;
/* 
notes :
1. by default visibility mode is private
2.public visibility mode :public members of base class becomes the public members of drived class.
3.private visibilty mode: public members of base class becomes the private members of derived class.
4.private members of any class never inherited.
*/

class employee{
public:
int id;
int salary;
employee(int inpid)
{
id=inpid;
salary=34;
}
employee(){}  // this default constructor is required when we are using inheritance syntax 
               // it is calling the base class constructor so if we dont use it we got error .
};

class programmer : employee  // we dont use here any visibility mode so by default mode is private
{
    public:
    int countnum=9;
    programmer(int num)
    {
        id=num;
    }
    void getdata()
    {
cout<<"the value of id is "<<id<<endl;

    }

};

int main()
{
    employee harpal(10),sumit(15);
    cout<<"the value of salary of harpal is  "<<harpal.salary<<endl;
    cout<<"the value of salary of sumit is  "<<sumit.salary<<endl;
programmer p1(10);
cout<<" the value of countnum is "<<p1.countnum<<endl;
p1.getdata();
//cout<<"the value of id is "<<p1.id;   //we cannot use this because visibiltiy mode is by default private 
// and the id is inherited as a private member to derived class so we cannot access it directly.


    return 0;
}