#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // writing and reading in a same file 
    // writing in a file
    // string st="hello mr. singh ";
    // ofstream objw("sample60.txt");
    //  objw<<st;
    // objw.close();
    // reading from same file
    string st1;
    ifstream objr("sample60.txt");
    while(getline(objr,st1))
    {
        cout<<st1;
       cout<<"\n";
    }
    
    objr.close();
    return 0;
}