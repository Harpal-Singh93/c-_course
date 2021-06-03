#include<iostream>
using namespace std;
class test{
int b;// if we declare b first than a line 5 will work fine
int a;// if we declare a first than line 4 will work fine 
// rest 3 lines will work in either case
public:
//1.  test(int i,int j):a(i),b(j)
//2.  test(int i,int j):a(i),b(i+j)
//3.  test(int i,int j):a(i),b(2*j)
//4.  test(int i,int j):a(i),b(a+j)
// 5.// test(int i,int j):b(j),a(b+i)// this will create problems because a is declared first
// and it must be initialised first.
{
    cout<<"welcome to constructor of test "<<endl;
cout<<"the value of a is "<<a<<endl;
cout<<"the value of b is "<<b<<endl;


}



};

int main()
{
    test t(4,5);
    return 0;
}