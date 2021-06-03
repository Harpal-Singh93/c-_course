#include <iostream>
using namespace std;

class complex;  // forward declaration 
class calculator {

public: 
int sum(int n1,int n2)
{
    return n1+n2;
}
int sumrealcomplex(complex,complex);
int sumcompcomplex(complex,complex);
};
class complex
{
    int a, b;
    // below method is not feasible if the number of function to which access given is large
    // individually declaring function as friend
// friend calculator::sumrealcomplex(complex,complex); // in this way we are giving access to private data of complex
// friend calculator::sumcompcomplex(complex,complex);// class to a function of calculator class

     ///////   rather we can declare whole class as a friend class as shown below////// 
friend class calculator;
public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printnum()
    {
        cout << "the complex number :  " << a << " +" << b << "i" << endl;
    }
};

int calculator:: sumrealcomplex(complex o1,complex o2)
{
 return (o1.a+o2.a);
}
int calculator:: sumcompcomplex(complex o1,complex o2)
{
 return (o1.b+o2.b);
}
int main()
{
    int real,imag;
complex c1,c2;
calculator c3;
c1.setdata(1,4);
c1.printnum();
c2.setdata(5,4);
c2.printnum();
real=c3.sumrealcomplex(c1,c2);
cout<<"the sum of real part is "<<real<<endl;
imag=c3.sumcompcomplex(c1,c2);
cout<<"the sum of imaginary part is "<<imag<<endl;
    return 0;
}