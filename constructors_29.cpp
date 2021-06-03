#include<iostream>
using namespace std;
class complex
{
int a,b;
public:
// creating a constructor 
//constructor is a special member function with the same name as of the class 
// it is used to intialize the objects of its class
//it is automatically invoked whenever an object is created 

complex(void); // default constructor declarartion 
void display()
{
cout<<"the value of complex number is "<<a<<"+ "<<b<<"i"<<endl;

}
};

complex::complex()
{
a=0;
b=0;
}

int main()
{
    complex c1,c2,c3;
    c1.display();
    c2.display();
    c3.display();
    
    return 0;
}

// characterstic of constructor

// 1.it shoule be declared  in the public section of class.
// 2.they are automatically invoked whenever the object is created.
// 3.they cannot return values and donot have return types.
// 4.it can have default arguments.
// 5.we cannot refer to their address.
