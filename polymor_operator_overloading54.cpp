#include<iostream>
using namespace std;
class increment{
    int num;
    public:
increment()
{
    num=10;
}
 void operator ++()
 {
     num+=2;
 }
void display()
{

    cout<<"the value of num is "<<num<<endl;
}
};



int main()
{
    increment in;
    ++in;
    in.display();
    
    return 0;
}