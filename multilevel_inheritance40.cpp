#include <iostream>
using namespace std;
/*
notes:
if we are inheriting b fron a and c from b.: [A--->B--->C] :-
1. A is base class for B and B is base class for C.
2.A--->B--->C is called the inheritance path
*/ 
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};
void student::set_roll_number(int r)
{
    roll_number = r;
}
void student::get_roll_number()
{
    cout << "the roll number is " << roll_number;
}
class marks : public student
{
protected:
    float physics, math;

public:
    void set_marks(float, float);
    void get_marks();
};
void marks::set_marks(float m1, float m2)
{
    physics = m1;
    math = m2;
}
void marks ::get_marks()
{
    cout << "the marks in physics are  " << physics << endl;
    cout << "the marks in math are  " << math << endl;
}
class result : public marks
{
protected:
    float percentage;

public:
    void display()
    {
        cout << "the percenatge is " << (physics + math) / 2 << "%" << endl;
    }
};

int main()
{
    result r1;
    r1.set_roll_number(100);
    r1.set_marks(67.8, 78.9);
    r1.get_roll_number();
    r1.get_marks();
    r1.display();

    return 0;
}