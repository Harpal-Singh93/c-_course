#include<iostream>
#include<cmath>
using namespace std;
class point
{
int x,y;
public:
friend double distance(point,point);
point(int a,int b)
{
x=a;
y=b;
}
void display()
{

    cout<<"the point is ("<<x<<","<<y<<")"<<endl;
}
};
double distance(point o1,point o2)
{
double z;
z=((o1.x-o2.x)*(o1.x-o2.x))+(o1.y-o2.y)*(o1.y-o2.y);
return sqrt(z);
}

int main()
{
    point p1(4,6);
    p1.display();
    point p2(5,7);
    p2.display();
    double dis= distance(p1,p2);
    cout<<"the distance between two point is "<<dis<<endl;
    return 0;
}