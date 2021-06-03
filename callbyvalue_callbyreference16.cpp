#include<iostream>
using namespace std;
void  swap(int a,int b)
{
int temp=a;
a=b;
b=temp;
}
void swappointer(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}
void swapreference(int &a,int &b)
{
int temp=a;
a=b;
b=temp;
}
int & swapreference1(int &a,int &b)
{
int temp=a;
a=b;
b=temp;
return a;
}



int main()
{
 int a=4,b=5; 
//  cout<<"the value of a before function call "<<a<<endl<<"the value of b before function call"<<b<<endl;  
// swap(a,b); 
//  cout<<"the value of a after function call "<<a<<endl<<"the value of b after function call"<<b<<endl; 
 // the value dont get change because it is c all by value we pass only copy of actual parameter

// we can alter values using pointer reference 
// cout<<"the value of a before function call "<<a<<endl<<"the value of b before function call"<<b<<endl; 
// swappointer(&a,&b);
// cout<<"the value of a after function call "<<a<<endl<<"the value of b after function call"<<b<<endl; 

// we can also alters value reference variables


//  cout<<"the value of a before function call "<<a<<endl<<"the value of b before function call"<<b<<endl; 
//   swapreference(a,b);

//  cout<<"the value of a after function call "<<a<<endl<<"the value of b after function call"<<b<<endl;

 // we can do one another thing with the help of reference variable 
swapreference1(a,b)=345;
cout<<"the value of a is "<<a<<endl<<"the value of b is "<<b<<endl;

    return 0;
}