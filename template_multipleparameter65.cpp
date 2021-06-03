#include<iostream>
using namespace std;
template <class T1,class T2>
class myclass
{
    public:
    T1 first;
    T2 second;
    public:
    myclass(T1 a,T2 b)
    {
        first=a;
        second=b;
    }
    void display(){
cout<<"your first number is : "<<this->first<<endl<<"your second number is : " <<this->second<<endl;

    }
void sum(){
cout<<"the sum of your number is " <<(first+second);

}
};


int main()
{
    myclass<int,int> obj(1,2);
    obj.display();

    obj.sum();
    cout<<endl;  
   // obj.close();
    myclass<int,float>obj1(2,3.4);
    obj1.display();
    obj1.sum();
    return 0;
}