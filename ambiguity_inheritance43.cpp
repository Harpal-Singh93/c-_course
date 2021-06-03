#include<iostream>
using namespace std;
class base1
{
public:
void greet()
{
cout<<"how are you ? "<<endl;
    }
};
class base2
{
public:
void greet()
{
cout<<" kaise ho ? "<<endl;
    }
};
class derived :public base1,public base2
{
    public:
void greet()
{
    base1::greet();  // by this we can resolve ambiguity 
}

};
class b{
public:
void say()
{

    cout<<"hello world"<<endl;
}


};
class d:public b{
    public:
    void say()
{
             // if drived function has its own function same name as base class 
             //than it will overwrite base class function like in this case 
    cout<<"hello world nameste"<<endl;
}

};


int main()
{
                           /////////////// ambiguity 1/////////////
    // base1 obj1;
    // obj1.greet();
    // base2 obj2;
    // obj2.greet();
//     derived d;
//    //  d.greet(); this line create ambiguity to which greet it need to call base1 or base2
//    // we can solve this ambiguty by creating a greet function in derived class and using 
//    //scope resolution we can tell it which greet to called 
//    d.greet();
                         //   or we can resolve ambiguity like another syntax
// derived e;
// e.base1::greet(); 
                         
                         ///////////////ambiguity 2//////////////////// 

       d object1;
       object1.say();                  
    
    return 0;
}