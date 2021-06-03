#include<iostream>
using namespace std;
int main()
{
    int age;
cout<<"enter your age : "<<endl;
cin>>age;
// if(age<18 && age>0)
// {
// cout<<"you are not eligible to get driving licsense"<<endl;
// }
// else if(age==18 || age>18)
// {

//     cout<<"you can make your driving licsense "<<endl;
// }
// else
// {
//     cout<<"you are not born yet"<<endl;
// }

// **************** switch case***********************
switch(age)
{
case 18:
cout<<"you are 18"<<endl;

case 20:
cout<<"you are 20"<<endl;
break;

case 22:
cout<<"you are 22"<<endl;
break;

case 24:
cout<<"you are 24"<<endl;
break;

case 26:
cout<<"you are 26"<<endl;
break;

default:
cout<<"you have entered any other number than given"<<endl;
break;


}

cout<<"done with switch case"<<endl;
    return 0;

}