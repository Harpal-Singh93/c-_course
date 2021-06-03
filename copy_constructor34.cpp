#include<iostream>
using namespace std;
class number
{
int a;
public:

number(){a=0; }
number(int num)
{
    a=num;
}
number (const number  &obj)
{
cout<<"copy constructor is called"<<endl;  // it is a user defind cpoy constructor if we comment it 
                                        //  compiler will use its own constructor.           
    a=obj.a;
}
void display()
{

    cout<<"the value is "<<a<<endl;
}

};



int main()
{
    number n1,n2(45);

n1.display();
n2.display();
number n3(n1); // copy constructor is invoked 
n3.display();

 //n2=n1;       // copy constructor donot invoked in this case
 number z3=n1;  /// copy constructor is invoked 
    return 0;
}