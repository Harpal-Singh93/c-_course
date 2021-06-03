#include<iostream>
using namespace std;
class complex{
int real,imag;
public:
complex(){}
complex(int a,int b)
{
real=a;
imag=b;
}
complex operator +(complex &obj){
complex res;
res.real=real+obj.real;
res.imag=imag+obj.imag;
return res;
}
void getdata()
{
cout<<"the resultant complex number is "<<real<<" + "<<imag<<"i"<<endl;
}

};

int main()
{
    complex c1(4,5),c2(6,11);
    complex c3=c1+c2;
    
    c3.getdata();
    
    return 0;
}