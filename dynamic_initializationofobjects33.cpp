#include<iostream>
using namespace std;
class bankdeposit
{
    int principal;
    int year;
    float rate;
    float return_value;
    public:
    bankdeposit(){}
    bankdeposit(int p,int y,float r)
    {
        principal=p;
        year=y;
        rate=r;
        return_value=principal;
        for (int  i = 0; i < year; i++)
        {
        return_value=return_value*(1+rate);
        }
     }
 bankdeposit(int p,int y,int r)
    {
        principal=p;
        year=y;
        rate=float(r)/100;
        return_value=principal;
        for (int  i = 0; i < year; i++)
        {
        return_value=return_value*(1+rate);
        }
     }
void show()
{
cout<<"the amount earned is "<<return_value<<endl;

}


};
int main()
{
    int p,y;
    float r;
    int R;
cout<<"enter the rate of interest in decimal form "<<endl;
    cout<<"enter the principal"<<endl;
    cin>>p;
    cout<<"enter the  number of  year "<<endl;
    cin>>y;
    cout<<"enter the rate of interest"<<endl;
    cin>>r;
  bankdeposit bd1,bd2,bd3;
   bd1=bankdeposit(p,y,r);
   bd1.show();

cout<<"enter the rate of interest in integer form "<<endl;
 cout<<"enter the principal"<<endl;
    cin>>p;
    cout<<"enter the  number of  year "<<endl;
    cin>>y;
    cout<<"enter the rate of interest"<<endl;
    cin>>R;

    bd2=bankdeposit(p,y,R);
   bd2.show();
    
    return 0;
}