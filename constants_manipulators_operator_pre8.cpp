#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    //********************* constant variable***************************************
// const int a=4;
// cout<<"the value of a was "<<a<<endl;
// a=45;  // it will give a error because a value cannot be altered
// cout<<"the value of a is "<<a<<endl;

//*************************Manipulators***********************************
// int a=4,c=3456;
// float b=4.5;
// cout<<"the value of a is "<<a<<endl;
// cout<<"the value of b is "<<b<<endl;
// cout<<"the value of c is "<<c<<endl;
// cout<<"the value of a with setw is "<<setw(5)<<a<<endl;
// cout<<"the value of b with setw is "<<setw(5)<<b<<endl;
// cout<<"the value of c with setw is "<<setw(5)<<c<<endl;


//***********************operator precedence***************************************

int a=4,b=6,c;

c=((((a*b)+34)-48)+32); /// by decalring  brackts we are showing which operator will perform its function first
cout<<"the value of c is : "<<c;

    return 0;
}