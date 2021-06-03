#include<iostream>
using namespace std;

int sum(int a,int b); // it is a vaild declaration 
//int sum(int,int);// it is also valid

void hello()            /// no declaration needed here 
{
cout<<"hello"<<endl;
}

int main()
{
    int num1,num2;
cout<<"enter your first number"<<endl;
cin>>num1;
cout<<"enter your second number"<<endl;
cin>>num2;
cout<<"the sum is  "<<sum(num1,num2)<<endl;
hello();
    return 0;
}


int sum(int a,int b)
{

    return a+b;
}