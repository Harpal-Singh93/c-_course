#include<iostream>
using namespace std;
// program for doing dot product using template
template<class T>
class vector
{
int size;
public:
T* arr;
vector(int m)
{
size=m;
arr=new T[size];
}
T dotproduct(vector &v)
{
T d=0;
for(int i=0;i<size;i++)
{
d+=this->arr[i]*v.arr[i];
}
return d;
}
};


int main()
{
    vector <float> v1(3);
    v1.arr[0]=1.2;
    v1.arr[1]=2.3;
    v1.arr[2]=0;

    vector <float> v2(3);
    v2.arr[0]=1.2;
    v2.arr[1]=2.3;
    v2.arr[2]=3.1;    
float result=v1.dotproduct(v2);
cout<<"the answer of dot product is : "<<result;
    
    return 0;
}