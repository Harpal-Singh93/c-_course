#include<iostream>
using namespace std;
class construct{
int a,b,c;
public:
construct(int x,int y=5,int z=10)
{
a=x;
b=y;
c=z;
}
void display()
{
cout<<"the value of data 1, data 2 and data 3 is "<<a<<","<<b<<" and "<<c<<endl;

}

};

int main()
{
construct c1(5);
c1.display();
construct c2(5,2);
c2.display();
construct c3(10,20,30);
c3.display();
    
    return 0;
}