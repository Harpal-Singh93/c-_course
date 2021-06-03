#include<iostream>
using namespace std;
class baseclass1{
    public:
int var_base;
void display()
{
    cout<<"the value of var_base in base class is "<<var_base<<endl;
}
};
class derived:public baseclass1
{
    public:
int var_derive;
void display()
{
    cout<<"the value of var_base in derived class is "<<var_base<<endl;
    cout<<"the value of var_derive in derived  class is "<<var_derive<<endl;
}
};



int main()
{
    baseclass1 *base_class_pointer;
    baseclass1 base_Class_obj;
    derived derived_class_obj;
    base_class_pointer=&derived_class_obj;

    base_class_pointer->var_base=34;// accessing base class data members
    base_class_pointer->display();

    //base_class_pointer->var_derive=67; this line thrpws an error 
    // we cannot point to derived  class data member even baseclass pointer has address of derived data class
base_class_pointer->var_base=346;

    derived *derive_class_pointer;
    derive_class_pointer=&derived_class_obj;
    derive_class_pointer->var_derive=45;
    derive_class_pointer->display();
    return 0;
}