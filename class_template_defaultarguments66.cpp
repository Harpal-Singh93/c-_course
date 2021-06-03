#include<iostream>
using namespace std;
template<class T1=int,class T2=float,class T3=char>
class data_display
{
T1 data1;
T2 data2;
T3 data3;
public:
data_display(T1 x,T2 y,T3 z)
{
    data1=x;
    data2=y;
    data3=z;
}
void show()
{
cout<<"the value of data1 is "<<data1<<endl;
cout<<"the value of data2 is "<<data2<<endl;
cout<<"the value of data3 is "<<data3<<endl;

}
}; 



int main()
{
    data_display <> obj(1,2.3,'e');
    obj.show();
    cout<<endl;
    data_display<float,char,char> obj1(2.7,'t','u');
    obj1.show();
    return 0;
}