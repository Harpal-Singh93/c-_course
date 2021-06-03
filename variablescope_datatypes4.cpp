#include<iostream>
using namespace std;
int glo=6;//global variable
void first()
{
 int a=4;    // local variable of first function
cout<<glo;        // it is taking global value of glo because it has no local variable of same name
}
int main()
{
int glo =9;// here is glo is local variable 
glo=10;
int a=5,b=4;
char c='d';
float e=1.4;
bool val=false;
first();
// printf("welcome\n");
// cout<<"the value of a is : "<<a<<"\nthe value of b is : "<<b;
// cout<<"\nthe value of c is : "<<c<<"\nthe value of e is : "<<e;
// cout<<"\nthe value of val is "<<val;
cout<<"\n"<<glo;    // program will print value of local glo variable here because local variable take precedence over global
return 0;

}