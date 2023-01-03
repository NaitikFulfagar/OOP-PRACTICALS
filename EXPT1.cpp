#include<iostream>
using namespace std;

class Complex
{
    public:
    float real,img;
    Complex()
    {
        real=img=0.0;
    }    
    Complex operator+(Complex);
    Complex operator*(Complex);
    friend ostream & operator <<(ostream&,Complex&);
    friend istream & operator >>(istream&,Complex&);
};

Complex Complex::operator+(Complex o)
{
    Complex temp;
    temp.real = real   +   o.real;
    temp.img  = img    +   o.img;
    return(temp);
}

Complex Complex::operator*(Complex o)
{
    Complex temp;
    temp.real = real * o.real - img * o.img;
    temp.img  = real * o.img  - img * o.real;
    return(temp);
}

ostream & operator <<(ostream& os,Complex& o)
{
    if(o.img>=0)
    {
        os<<o.real<<"+"<<o.img<<"i";
    }
    else
    {
        os<<o.real<<o.img<<"i";
    }
    return(os);
}

istream & operator >>(istream& is,Complex& o)
{
    is>>o.real>>o.img;
    return(is);
}

int main()
{
    Complex a,b,c,d;
    cout<<"\n1st Complex Number:";
    cout<<"\nEnter Real and Imaginery part : ";
    cin>>a;
    cout<<"\n2nd Complex Number:";
    cout<<"\nEnter Real and Imaginery part : ";
    cin>>b;
    //addition
    c=a+b;
    cout<<"\nComplex Number after Addition Operation is "<<c;
    //multipication
    d=a*b;
    cout<<"\nComplex Number after Multipication Operation is "<<d<<endl;
    return(0);
}