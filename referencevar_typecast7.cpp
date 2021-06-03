#include<iostream>
using namespace std;

int c=56;

int main()
{
int a,b,c;
// cout<<"enter the value of a : "<<endl;
// cin>>a;
// cout<<"enter the value of b : "<<endl;
// cin>>b;
// c=a+b;
// cout<<"the sum is "<<c<<endl; 
// cout<<"the value of global operator is "<< ::c<<endl;

//***************** build in data type**************************

// float  d=34.4;
// long double e=34.4;

// cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
// cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
// cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
// cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
// cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;

//************************ reference variable*****************************
// float x=456;
// float &y=x;

// cout<<"the value of x is  "<<x<<endl;
// cout<<"the value of y is  "<<y<<endl;


// ********************typecasting**********************************
int p=6;
float q=6.64;
cout<<"the value of p after typecasting is  "<<(float)p<<endl;
cout<<"the value of p after typecasting is  "<<float(p)<<endl;

cout<<"the value of q after typecasting is  "<<(int)q<<endl;
cout<<"the value of q after typecasting is  "<<int(q)<<endl;
 p=int(q);


}