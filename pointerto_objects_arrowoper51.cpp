#include<iostream>
using namespace std;
class complex{

int real,imaginary;
public:
void setdata(int a,int b)
{
real=a;
imaginary=b;
}
void getdata(void)
{
cout<<"the real part of complex number  is "<<real<<endl;
cout<<"the imaginary part of complex number  is "<<imaginary<<endl;
}
};
int main()
{
//    complex c1;
//    complex *ptr=&c1;
                // another way of creating object
complex *ptr=new complex;

//   c1.setdata(4,5);
//(*ptr).setdata(4,5);  this line and line below it will give same output
ptr->setdata(4,5); //arrow operator

 //  c1.getdata(); 
  // (*ptr).getdata();
   ptr->getdata(); 


// array of objects 
complex *ptr1=new complex[3];
ptr1->setdata(6,7);
ptr1->getdata();



    return 0;
}