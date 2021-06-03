#include<iostream>
using namespace std;

int main()
{
int arr[]={5,4,3,2,1}; // initialization of array
int arr1[5];
// cout<<"the value of arr[0] is  "<<arr[0]<<endl;
// cout<<"the value of arr[1] is  "<<arr[1]<<endl;
// cout<<"the value of arr[2] is  "<<arr[2]<<endl;
// cout<<"the value of arr[3] is  "<<arr[3]<<endl;
// cout<<"the value of arr[4] is  "<<arr[4]<<endl;
// another way of initialization of array

cout<<"\nanother way of initialization of array"<<endl;
arr1[0]=12;
arr1[1]=13;
arr1[2]=14;
arr1[3]=15;
arr1[4]=16;
// cout<<"the value of arr1[0] is  "<<arr1[0]<<endl;
// cout<<"the value of arr1[1] is  "<<arr1[1]<<endl;
// cout<<"the value of arr1[2] is  "<<arr1[2]<<endl;
// cout<<"the value of arr1[3] is  "<<arr1[3]<<endl;
// cout<<"the value of arr1[4] is  "<<arr1[4]<<endl;

// print of value using for loop

// for(int i=0;i<5;i++)
// {

// cout<<"the value of arr in "<<i<<" is "<<arr[i]<<endl;
// }


// array with pointer

int *ptr=arr;

cout<<*ptr<<endl;
cout<<*ptr++<<endl;
cout<<*(++ptr)<<endl;


// cout<<"the value of arr[0] using pointer is "<<*ptr<<endl;
// cout<<"the value of arr[1] using pointer is "<<*(ptr+1)<<endl;
// cout<<"the value of arr[2] using pointer is "<<*(ptr+2)<<endl;
// cout<<"the value of arr[3] using pointer is "<<*(ptr+3)<<endl;
// cout<<"the value of arr[4] using pointer is "<<*(ptr+4)<<endl;


    
    return 0;
}