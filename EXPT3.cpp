/*
Imagine a publishing company which does marketing for book and audio cassette versions.
Create a class publication that stores the title (a string) and price (type float) of publications.
From this class derive two classes: book which adds a page count (type int) and tape which
adds a playing time in minutes (type float).
Write a program that instantiates the book and tape class, allows user to enter data and
displays the data members. If an exception is caught, replace all the data member values with
zero values.
*/
#include<iostream>
#include<string.h>
using namespace std;
bool expchk(float x);
class Publication
{
    public:
    string title;
    float price;
    Publication(){
    title="";
    price=0.0;
    };
    ~Publication(){};
};

class Book:public Publication
{
    public:
    int pages;
    Book(){pages=0;}
    void acceptbook();
    void displaybook();
};



void Book::acceptbook()
{
    cout<<"\nEnter Title of book : "; 
    //cin>>title;
    cin>>title;
    
    bool flag=false;
    while(flag==false)
    {
        cout<<"\nEnter price of book : "; 
        cin>>price;
        flag=expchk(price);
    }
    flag=false;
    while(flag==false)
    {
        cout<<"\nEnter No. of pages of book : ";
        cin>>pages;
        flag=expchk(pages);
    }
}

void Book::displaybook()
{
    cout<<"\nTitle of Book is "<<title;
    cout<<"\nPrice of Book is "<<price;
    cout<<"\nNo.of pages of Book is "<<pages<<"\n\n";
}


class Tape:public Publication
{
    public:
    float time;
    Tape(){time=0;}
    void accepttape();
    void displaytape();
};


void Tape::accepttape()
{
    cout<<"\nEnter Title of Tape : "; cin>>title;
    
    bool flag=false;
    while(flag==false)
    {
        cout<<"\nEnter price of Tape : "; 
        cin>>price;
        flag=expchk(price);
    }
    flag=false;
    while(flag==false)
    {
        cout<<"\nEnter Playback Time of Tape : ";
        cin>>time;
        flag=expchk(time);
    }
}
void Tape::displaytape()
{
    cout<<"\nTitle of Tape is "<<title;
    cout<<"\nPrice of Tape is "<<price;
    cout<<"\nPlayback Time of Tape is "<<time<<" min."<<"\n\n";
}


bool expchk(float x)
{
    try
    {
        if (x==0)
        {
            throw x;
        }
        else
            return true;
        
    }
    catch(float a)
    {
        cout<<"\nEntered value is not valid!";
        cout<<"\ntry again";
        return false;
    }
    
}

int main()
{
    Book b;
    Tape t;
    int ch;
    do
    {
        cout<<"************";
        cout<<"\n1.Enter Book Details.";
        cout<<"\n2.Enter Audio Tape Details.";
        cout<<"\n3.Show Book Details.";
        cout<<"\n4.Show Audio Tape Details.";
        cout<<"\n5.Exit.";
        cout<<"\nEnter Choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                b.acceptbook();
                break;
            }
            case 2:
            {
                t.accepttape();
                break;
            }
            case 3:
            {
                b.displaybook();
                break;
            }
            case 4:
            {
                t.displaytape();
                break;
            }      
            case 5:
            {
                cout<<"Exiting.....";
                break;
            }
        }
    }while(ch!=5);
            return 0;

}