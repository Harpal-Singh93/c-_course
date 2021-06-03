#include<iostream>
#include<string>
using namespace std;
class binary
{          
    private:         /// by default everything is private in class so if we write private or not doesnot matter here 
      string s;
       void chk_bin(void); // if we made this function private we cannot call it from main 
      public:
      void read(void);   
      //void chk_bin(void);
      void ones_compliment(void);    
      void display(void);                 
      };
void binary :: read()
{
cout<<"enter a binary sequence "<<endl;
cin>>s;
}      
void binary :: chk_bin()
{
for(int i=0;i<s.length();i++)
{
    if(s[i]!='0'&&s[i]!='1')
    {
        cout<<"entered sequence is  not valid binary sequence"<<endl;
        exit(0);
    }
}
}
void binary ::ones_compliment()
{
//chk_bin();   //  this statement is known as nesting of member function
// we don't need any object in this case // if don't want to access this function to user 
for(int i=0;i<s.length();i++)
{
    if(s.at(i)=='1')
    {
        s.at(i)='0';
    }
    else
    {
        s.at(i)='1';
    }
    
}
}
void binary::display()
{
for(int i=0;i<s.length();i++)
{
    cout<<s.at(i);
}
}


int main()
{
binary harpal;
harpal.read();
//harpal.chk_bin();
harpal.ones_compliment();
harpal.display();

    return 0;
}

// oops-> classes and objects

// c++ --> initially called -->  c with classes by stroustroup
// class-->extension of structure (in c)
//structure had limitations
//        --- members are public
///       --- no methods
// classes ---> structure +more
// classes --> can have methods and properties
// classes -->can make few members as private & few as public
//structure in c++ typdefed
// you can declare objects along with the class declaration like this :
  /*   class employee{
      // class definition 
  }harry, harpal;  // but it is not recommended */
  // harry.salary=8 makes no sense if salary is private