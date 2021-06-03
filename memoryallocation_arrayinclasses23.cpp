#include<iostream>
using namespace std;
class shop
{
int itemid[20];
int itemprice[20];
int counter;
public:
void in_counter()
{
    counter=0;
}
void setprice(void);
void displayprice(void);
};
void shop:: setprice()
{
cout<<"enter the item id :"<<endl;
cin>>itemid[counter];
cout<<"enter the item price :"<<endl;
cin>>itemprice[counter];
counter++;
}
void shop::displayprice()
{
    for(int i=0;i<counter;i++)
    {
     cout<<"item id for "<<i+1<<" is "<<itemid[i] <<" and its price is "<<itemprice[i]<<endl;
    }
}



int main()
{
    shop dukaan;
    dukaan.in_counter();
      for(int i=0;i<3;i++)
      {

          dukaan.setprice();
      }
  dukaan.displayprice();
    return 0;
}