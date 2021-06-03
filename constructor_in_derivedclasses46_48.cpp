#include<iostream>
using namespace std;
class base1{
int data1;
public:
base1(int i)
{
data1=i;
cout<<"this is the base1 constructor "<<endl;
}
void printdata1(void)
{
cout<<"the value of data1 is "<<data1<<endl;
}
};
class base2
{
int data2;
public:
base2(int i){
data2=i;
cout<<"this is the base2 constructor "<<endl;
}
void printdata2(void)
{
cout<<"the value of data2 is "<<data2<<endl;
}
};
class derived:public base1,public base2{
int derive1,derive2;
public:
derived(int a,int b,int c,int d):base1(a),base2(b)
{
derive1=c;
derive2=d;
cout<<"derived class constructor is called "<<endl;
}
void printdataderived(void)
{
cout<<"the value of derive1 data is "<<derive1<<endl;
cout<<"the value of derive2 data is "<<derive2<<endl;
}
};



int main()
{
    derived harpal(1,2,4,5);
    harpal.printdata1();
    harpal.printdata2();
    harpal.printdataderived();
    return 0;
}