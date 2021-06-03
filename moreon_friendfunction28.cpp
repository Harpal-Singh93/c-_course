#include<iostream>
using namespace std;
// practice on friend function simplest  form to add two numbers

class Y;
class X
{
int val1;
public:
friend int add(X,Y);
void getdata(int num)
{
val1=num;
}


};
class Y
{
int val2;
friend int add(X,Y);
public:
void getdata1(int num1)
{
    val2=num1;
}
};
int add(X o1,Y o2)
{

    return o1.val1+o2.val2;
}



int main()
{
    int z;
    X c1;
    c1.getdata(4);
    Y c2;
    c2.getdata1(5);
     cout<<"the sum of the number entered is "<<add(c1,c2)<<endl;

    return 0;
}