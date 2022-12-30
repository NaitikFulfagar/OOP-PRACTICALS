/*Implement a class Complex which represents the Complex Number data type. Implement the
following
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overload operator+ to add two complex numbers.
3. Overload operator* to multiply two complex numbers.
4. Overload operators << and >> to print and read Complex Numbers.*/

#include<iostream>
using namespace std;

class Complex
{
  public:
  int real,img;
  Complex()
  {
    real=img=0;
  }

  Complex operator +(Complex);
  Complex operator *(Complex);
  friend ostream & operator <<(ostream&,Complex&);
	friend istream & operator >>(istream&,Complex&);

};

Complex Complex :: operator +(Complex o)
{
  Complex temp;
  temp.real = real + o.real;
  temp.img  = img  + o.img;
  return(temp);
}

Complex Complex :: operator *(Complex o)
{
  Complex temp;
  temp.real = real * o.real - img  * o.img;
  temp.img  = real * o.img  + real * o.img;
  return(temp);
}

ostream & operator <<(ostream& os,Complex& obj)
{
	os<<"\n"<<obj.real<<"+"<<obj.img<<"i"<<endl;
}

istream & operator >>(istream& is,Complex& obj)
{
	is>>obj.real>>obj.img;
}

int main()
{
  Complex a,b,c,d;
  cout<<"\nEnter Real and img part of 1st Complex no. " ;
  cin>>a;
  cout<<"\nEnter Real and img part of 2nd Complex no. " ;
  cin>>b;
  c=a+b;
  cout<<"\nComplex Number Addition is :"        <<c;
  d=a*b;
  cout<<"\nComplex Number Multiplication is :"  <<d;
  
}

//CODED BY NAITIK FULFAGAR
