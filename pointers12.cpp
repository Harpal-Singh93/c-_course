#include<iostream>
using namespace std;

int main()
{
    int a=4;
    int *ptr;
    ptr=&a;
    cout<<"the address of a is  "<<&a<<endl;
    cout<<"the address of a is  using pointer variable  "<<ptr<<endl;
    cout<<"the value at a using dereference operator  "<<*ptr<<endl;

// pointer to pointer
int **ptr1=&ptr;
cout<<"address of ptr1:  "<<ptr1<<endl;
cout<<"address of a using ptr1:  "<<*ptr1<<endl;
cout<<"the value of a using **ptr1:  "<<**ptr1<<endl;



    return 0;
}