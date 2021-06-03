#include<iostream>
using namespace std;
// **************************** inline function ******************************************* 
inline int square(int x)
{
// static int c=0;  // use of static variable should be avoided 
// c=c+1;
// return x*x+c;
return x*x;
}

////********************* default argument ***************************
int sum(int a,int b, int c=0,int d=0)
{

    return a+b+c+d;
}
//************************* constant argument ****************************
int constant( const int x)
{

   // x=x+1;   // it will produce error because we cannot change a constant variable
    return x;
}

int main()
{
int a=10;
// cout<<"the square of 10 is "<<square(a)<<endl;
// cout<<"the square of 10 is "<<square(a)<<endl;
// cout<<"the square of 10 is "<<square(a)<<endl;
// cout<<"the square of 10 is "<<square(a)<<endl;
// cout<<"the square of 10 is "<<square(a)<<endl;
// cout<<"the square of 10 is "<<square(a)<<endl;

cout<<"the sum in case of 2 argument is  "<<sum(10,20)<<endl;
cout<<"the sum in case of 3 argument is  "<<sum(10,20,30)<<endl;
cout<<"the sum in case of 4 argument is  "<<sum(10,20,30,40)<<endl;
// so we need not to create 3 sum function

cout<<"updated value of a is "<<constant(a); 
    return 0;
}