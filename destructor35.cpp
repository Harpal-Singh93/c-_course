#include<iostream>
using namespace std;
int count=0;
class num
{
public:
num()
{
cout<<"this is time when constructor is called and object number is "<<count<<endl;
count++;
}
~num()
{
cout<<"this is time when destructor is called and object number is "<<count<<endl;
count--;
}
};





int main()
{
    cout<<"welcome in main "<<endl;
    cout<<"creating our first object "<<endl;
    num n1;
    {
    cout<<"entering the block"<<endl;
    num n3,n2;
    cout<<"existing the block"<<endl;
     }
cout<<"back to main "<<endl;
    return 0;
}