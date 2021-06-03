#include<iostream>
#include<fstream>
using namespace std;

// use of fstream 
int main()
{
fstream fio;
string line;
fio.open("sample1.txt",ios::trunc|ios::in|ios::out);

while(fio)
{
    getline(cin,line);
   // press -1 for exit

    if(line=="-1")
    {
        break;
    }
    fio<<line<<endl;
}
fio.seekg(0,ios::beg);

while(fio)
{
    getline(fio,line);
    cout<<line<<endl;
}
fio.close();
    return 0;
}