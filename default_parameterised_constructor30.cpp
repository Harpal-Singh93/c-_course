#include<iostream>
using namespace std;
class complex
{
    int a,b;
public:
complex(int,int);
//complex(void); // it is a default constructor as it accepts no parameter.
void display()
{
cout<<"the value of complex number is "<<a<<"+ "<<b<<"i"<<endl;

}
};
complex::complex(int x ,int y)
{
a=x;
b=y;

}



int main()
{
    // implicit call 
 complex c1(4,5);
 c1.display();
 // explicit call

 complex c2=complex(6,7);
 c2.display();

    return 0;
}