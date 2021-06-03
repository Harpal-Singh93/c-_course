#include <iostream>
using namespace std;
class baseclass1
{
public:
    int var_base = 1;
  virtual void display()   // virtual function
    {
        cout << " 1 the value of var_base in base class is " << var_base << endl;
    }
};
class derived : public baseclass1
{
public:
    int var_derive = 2;
    void display()
    {
        cout << "2 the value of var_base in derived class is " << var_base << endl;
        cout << "2 the value of var_derive in derived  class is " << var_derive << endl;
    }
};
int main()
{
    baseclass1 *bptr;
    derived obj;
    bptr = &obj;
    bptr->display();
    return 0;
}