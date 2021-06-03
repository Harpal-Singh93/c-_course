#include<iostream>
using namespace std;
int factorial(int n)
{
if(n<=1)
{
return 1;
}
else
{
    return n*factorial(n-1);
}
}

int fibonacci(int n)
{
    if(n<2)
    {
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main()
{
    int num,ans;

    // //// for calculating factorial
    // cout<<"enter a number whose factorial you want "<<endl;
    // cin>>num;
    // cout<<"the factorial of "<<num<<" is  "<<factorial(num);

// for calculating fibonacci series 

    cout<<"enter a location of any number to get corresponding fibonacci number   "<<endl;
    cin>>num;
    cout<<"the fibonacci of "<<num<<" is  "<<fibonacci(num);


    return 0;
}