#include<iostream>
#include<cstring>
using namespace std;
class cwh{
    protected:
    string title;
    float rating;
public: // cwh is now a abstract class which have a pure virtual function
cwh(string s,float r)
{
title=s;
rating=r;
}
virtual void display()=0;  // do nothing function---> pure virtual function
};
class cwhvideo:public cwh
{
 private:   
float video_length;
public:
cwhvideo(string st,float ra,float vl):cwh (st, ra)
{
video_length=vl;
}
void display()
{
cout<<"the tiitle of this video is "<<title<<endl;
cout<<"rating of this video is   "<<rating<<" out of 5 "<<endl;
cout<<"the length of this video is "<<video_length<<" min"<<endl;
}
};
class cwhtext:public cwh
{
    protected:
    int word_length;
    public:
    cwhtext(string st,float ra,int wl):cwh(st,ra)
    {
       word_length=wl;
    }
    void display()
    {
       cout<<"the tiitle of this text is "<<title<<endl;
       cout<<"rating of this text is   "<<rating<<" out of 5 "<<endl;
       cout<<"the number of total words are "<<word_length<<" words"<<endl;

    }
};



int main()
{
    /// for video 
    string video="c++";
    float rat=4.5,vidlen=30.7,word_len=400;
    cwh* bptr[2];
    cwhvideo vid_ptr(video,rat,vidlen);
    bptr[0]=&vid_ptr;
    bptr[0]->display(); 
    cout<<"\n";
 // for text 
    rat=4.9; 
    video="c program";
    cwhtext text_ptr(video,rat,word_len);
    bptr[1]=&text_ptr;
    bptr[1]->display();
       
    return 0;
}