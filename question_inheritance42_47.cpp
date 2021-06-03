#include <iostream>
#include<cmath>
using namespace std;
class simple_calculator
{
protected:
    int num1, num2;

public:
    void set_num(int, int);
    void oper1();
};
void simple_calculator::set_num(int a, int b)
{
    num1 = a;
    num2 = b;
}
void simple_calculator::oper1()
{
    cout << "the answer of addition is " << num1 + num2 << endl;
    cout << "the answer of subtraction is " << num1 - num2 << endl;
    cout << "the answer of multiplication is " << num1 * num2 << endl;
    cout << "the answer of division is " << num1 / num2 << endl;
}
class scientific_calculator
{
protected:
    int num3, num4;

public:
    void set_num2(int, int);
    void oper2();
};
void scientific_calculator::set_num2(int a, int b)
{
    num3 = a;
    num4 = b;
}
void scientific_calculator::oper2()
{
    cout << "the answer of sin(num3) is " << sin(num3) << endl;
    cout << "the answer of cos(num4) is " <<  cos(num4) << endl;
    cout << "the answer of log10(x) is " << log10(num3) << endl;
    cout << "the answer of expoential of A is " << exp (num4) << endl;
}
class hybrid_calculator:public simple_calculator,public scientific_calculator
{
    


};

int main()
{
     hybrid_calculator calc;
    calc.set_num(10,2);
    calc.oper1();
    calc.set_num2(10,100);
    calc.oper2();


    return 0;
}