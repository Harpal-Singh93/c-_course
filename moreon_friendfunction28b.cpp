#include<iostream>
using namespace std;
// friend function example of swapping two numbers
class c2;
class c1
{
int val1;
friend void swap(c1 &, c2 &);
public:
void getdata(int num)
{
val1=num;
}
void display()
{
    cout<<val1;
}
};
class c2
{
int val2;
friend void swap(c1 &, c2 &);
public:
void getdata(int num1)
{
val2=num1;
}
void display()
{
    cout<<val2;
}
};
void swap(c1 &x,c2 &y)
{
int temp=x.val1;
x.val1=y.val2;
y.val2=temp;

}
int main()
{
    c1 x;
    x.getdata(45);
    c2 y;
    y.getdata(54);
    swap(x,y);
   cout<<"the values after swapping are ";
   x.display();
   cout<<endl;
   y.display();
    return 0;
}