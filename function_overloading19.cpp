#include<iostream>
using namespace std;

int sum(int a,int b)
{
return a+b;
}
float sum(float x,float y)
{
 return x+y;
}
float sum(int x,float y,float z)
{
return x+y+z;
}
int main()
{
    int a=10,b=20;
    float x=2.3,y=3.2;
    cout<<"the of 10 and 20 is "<<sum(a,b)<<endl;
    cout<<"the sum of 2.3 and 3.2 is  "<<sum(x,y)<<endl;
    cout<<"the sum of 10 ,2.3 and 3.2 is "<<sum(a,x,y)<<endl;
    return 0;
}