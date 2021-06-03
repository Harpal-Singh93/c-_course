#include<iostream>
using namespace std;
/* inheritance :
student --->Test 
student --->sports
test---->result
sports---->result
*/
class student{
protected:
int roll_no;
public:
void setroll(int num)
{
roll_no=num;
}
void getroll(void)
{
    cout<<"your roll number is "<<roll_no<<endl;
}
};
class test : virtual public student{
protected:
float maths,physics;
public:
void get_marks(float m1,float m2)
{
    maths=m1;
    physics=m2;
}
void show_marks(void)
{
cout<<"your marks in maths are "<<maths<<endl
    <<"your marks in physics are "<<physics<<endl;
}
};
class sports:public virtual student{
protected:
int pt_score;
public:
void get_score(int sc)
{
pt_score=sc;
}
void show_score(void)
{
    cout<<"your pt score is "<<pt_score<<endl;
}
};
class result:public test,public sports{
private:
float total;
public:
void show(void)
{
     total=maths+physics+pt_score;
getroll();
show_marks();
show_score();
cout<<"your total marks are "<<total<<endl;
}
};



int main()
{

result harpal;
harpal.setroll(100);
harpal.get_marks(78.9,76.8);
harpal.get_score(8);
harpal.show();



    return 0;
}