#include<iostream>
#include<fstream>
using namespace std;
/* 
the useful classes for working with file in c++ are:
1.fstreambase
2.ifstream----> is derived class of fstreambase
3.oftsream----> is derived class of fstreambase
*/
// in order work with files in c++,you will have to open it.primarily,there
//are 2 ways to open a file:
//1. using the constructor 
//2.using the member functions open() of the class

int main()
{    
    //for writing in a file
   string st1="hello how r u";
   string st2;
ofstream out("sample60.txt");
out<<st1;

//for reading from a file
ifstream in("sample60b.txt");
getline(in,st2);
cout<<st2<<endl;
    
    return 0;
}