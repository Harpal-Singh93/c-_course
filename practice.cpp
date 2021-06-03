#include<iostream>
using namespace std;
int a=45;
int main()
{
float a=6.13;
float &y=a;
cout<<"the value of a is "<<(int)a<<endl;
cout<<"the value of reference variable y is "<<(double)y;
    return 0;
}