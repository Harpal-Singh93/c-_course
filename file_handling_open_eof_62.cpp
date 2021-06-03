#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // for writing a file
ofstream out;
out.open("sample60.txt");
out<<"hello my name is  \n";
out<<"harpal singh";
out.close();
string st;
// for reading a file 
ifstream in;
in.open("sample60.txt");
// in>>st;  these lines will only display a single character
// cout<<st;  to display all the characters or lines we use eof 
while(in.eof()==0)
{
in>>st;
cout<<st<<endl;
}
in.close();
 return 0;
}