#include<iostream>
using namespace std;
template<class T>
class harpal
{
T data;
public:
harpal(T a)
{
    data=a;
}
void display();
};
template <class T>
void harpal<T>::display()  // syntax for using type functions outside class
{
cout<<data<<endl;
}
void func(int a)
{
cout<<"func is called "<<a<<endl;
    }
template<class T>
void func(T a)
{
cout<<" templatised func is called " <<a<<endl;
    }
template<class T>
void func1(T a)
{
cout<<" templatised func is called " <<a<<endl;
    }

int main()
{
    // harpal<int> h(45);
    // h.display();
    // harpal<float>h1(4.5);
    // h1.display();
    // harpal<char>h2('v');
    // h2.display();
    func(6);
    func('g');
    func1(6);
   return 0;
}