#include<iostream>
using namespace std;
/*    
     1 2 3
         ^
         |
         |
         ptr 
    ptrtemp      
    */


class shop_item{
int id;
float price;
public:
void setdata(int a,float b)
{
    id=a;
    price=b;
}
void getdata(void)
{
cout<<"the code of item is "<<id<<endl;
cout<<"the price of item is "<<price<<endl;
}
};




int main()
{
    int size=3,i,p;
    float q;
// 1. general store item
// 2.veggies item
// 3.hardware item


    shop_item *ptr=new shop_item[size];
    shop_item *ptrtemp=ptr;

    for(i=0;i<size;i++)
    {
        cout<<"enter the id and price for "<<i+1<<" item"<<endl;
        cin>>p>>q;
        //(*ptr).setdata(p,q);
        ptr->setdata(p,q);
        ptr++;
     }
     for ( i = 0; i < size; i++)
     {
         cout<<"the item number is "<<i+1<<endl;
         ptrtemp->getdata();
         ptrtemp++;
     }
     

    
    return 0;
}