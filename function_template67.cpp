#include<iostream>
using namespace std;


template<class T1,class T2>

float avg(T1 a,T2 b)
{
    return (a+b)/2.0;
}
template<class T>
void swapp(T &a,T&b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
   int x=5,y=7;
    float a=avg(4,4.5);
    cout<<"the average is "<<a<<endl;
   
cout<<"the number before swaping is x : "<<x<<" and y : "<<y<<endl;
swapp(x,y);
    cout<<"the number after swaping is x : "<<x<<" and y : "<<y<<endl;
    return 0;
}