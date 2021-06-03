#include<iostream>
using namespace std;
class complex
{
    int a,b;
friend complex sumcomplex(complex o1,complex o2); // this line tells compiler that sumcomplex is a friend 
//function. this line help friend function to access private memeber of the class complex
// this declaration can be done anywhere inside the class
    public:
    void setdata(int v1,int v2)
    {
        a=v1;
        b=v2;
    }
    void printnum()
    {

        cout<<"the complex number :  "<<a<<" +"<<b<<"i"<<endl;
    }
};
complex sumcomplex(complex o1,complex o2)
{
    complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    complex c1,c2,sum;
    c1.setdata(2,5);
    c1.printnum();
    c2.setdata(4,2);
    c2.printnum();
   sum = sumcomplex(c1,c2);  // we dont need any object to call friend function
    sum.printnum();
    return 0;
}
// properties of friend function 
// 1. not in the scope of the class
// 2.since it is not in the scope of class it cannot be called using object of the class 
// c1.sumcomplex()  invaild
// 3. can be invoked without using the help of objects
// 4. usually contains objects as arguments 
// 5. can be declared public and private part of class
// 6. it cannot access the members directly by their names and object_name.member_name  to access any member.