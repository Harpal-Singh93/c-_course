#include<iostream>
using namespace std;
class employee
{
int id;
int salary;
public:
void setdata(void)
{
 salary=122;   
cout<<"enter the value of id "<<endl;
cin>>id;
}
void getdata()
{
cout<<"entered id is "<<id<<endl;
}

};

int main()
{
// employee harpal,aman,monu,pardeep;
//  harpal.setdata();                         // we don't prefer this if number is too high 
//  harpal.getdata();                    // so here array of object comes into picture
employee fb[4]; 
for (int i = 0; i < 4; i++)
{
  fb[i].setdata();
  fb[i].getdata();

}




    return 0;
}