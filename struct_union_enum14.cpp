#include<iostream>
using namespace std;

struct employee 
{
int eid;
char fav_char;
float salary;
};
typedef struct school
{
char fav;
int num;
float cgpa;
}stu1;

union selection
{
int num;
char c;
float f;
};

//enum week{sun,mon,tue,wed,thu,fri,sat};

enum season
{winter=3,
summer=4,
autumn=5
};

int main()
{
//    struct employee e1;
//    e1.eid=100;
//    e1.fav_char='f';
//    e1.salary=200000;
//    cout<<"employee 1 data is : "<<endl;
//    cout<<"employee id is : "<<e1.eid<<endl;
//    cout<<"employee fav char  is : "<<e1.fav_char<<endl;
//    cout<<"employee salary  is : "<<e1.salary<<endl;
    
// using typdef 

// stu1 s1;
// s1.fav='a';
// s1.num=68;
// s1.cgpa=7.5;
// cout<<"student 1's data is given below"<<endl;
// cout<<"favourite character is "<<s1.fav<<endl;
// cout<<"the numbers  is "<<s1.num<<endl;
// cout<<"the cgpa is "<<s1.cgpa<<endl;

// using union
// union selection s1;
// s1.num=55;
// cout<<"the selected number is "<<s1.num<<endl;
// s1.c='a';
// cout<<"the selected number is "<<s1.num<<endl;

// using enumeration 

// week today;
// today=wed;
// cout<<"today is "<<today+1<<"th day of the week"<<endl;

season s;
s=summer;
cout<<"the value of summer is "<<s<<endl;

    return 0;
}