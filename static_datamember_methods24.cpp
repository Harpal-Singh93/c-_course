#include<iostream>
using namespace std;
// by using static variable we can use this single variable to link all the objects
//which is not possible in case of simple variable.this variable also known as class variable
// count is static data member of class employee

// we have also static functions which can access only static variable and static functions 
// static functions can be directly called without using object name by using class name only
class employee
{
private:
int id;
static int count; // by default it get intialised by 0 //we also cannot intialise the count here

public:
void setdata(void){
cout<<"enter the id "<<endl;
cin>>id;
count++;
}
void getdata()
{
    cout<<"entered id is "<<id<<endl<<" employee number is  "<<count<<endl;
}
static void getcount(void )   // static function
{
  //  cout<<id;// it will throw an error because id is not a static variable
cout<<"the value of the count is "<<count<<endl;
}

};
int employee::count; // we can give any value we want to give to count here
int main()
{
employee harpal,aman,monu;
harpal.setdata();
harpal.getdata();
employee::getcount();  // call to a static function

aman.setdata();
aman.getdata();
employee::getcount();  // call to a static function

monu.setdata();
monu.getdata();
employee::getcount();  // call to a static function


    return 0;
}