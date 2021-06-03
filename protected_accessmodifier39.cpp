#include<iostream>
using namespace std;
/*

for a protected member:
                           
                          public derivation        private derivation        protected  derivation

1. private member          not inherited           not inherited             not inherited

2.protected members        protected               private                   protected
 
3.public members            public                 private                   protected
    
*/
class base
{
int b=10;
protected:
int a=20;

};
class derived:public base
{


};
int main()
{
  base b;
  derived d;
//  cout<<b.a;   both lines will give error because a is protected in both scenario 
//  cout<<d.a;    and we cannot directly access a protected variable
    return 0;
}