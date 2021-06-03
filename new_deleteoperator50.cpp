#include<iostream>
using namespace std;
int main()
{
    int a=4;
int *ptr=&a;
cout<<"the value of a is "<<*ptr<<endl;
int *p=new int(40);
float *q=new float(40.56);
// delete p;
cout<<"the value at p is "<<*p<<endl;
cout<<"the value at q is "<<*q<<endl;

int *arr=new int[3];
arr[0]=1;
*(arr+1)=2;
arr[2]=3;
// delete[] arr;
cout<<"the value of arr[0] is "<<arr[0]<<endl;
cout<<"the value of arr[1] is "<<arr[1]<<endl;
cout<<"the value of arr[2] is "<<arr[2]<<endl;

delete p;
delete q;
delete[]arr;

return 0;
}