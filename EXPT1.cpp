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
	float real,img;
	Complex()
	{
		real=0;
		img=0;
	} 
	Complex operator +(Complex);
	Complex operator *(Complex);
	friend ostream & operator <<(ostream&,Complex&);
	friend istream & operator >>(istream&,Complex&);

};

Complex Complex::operator+(Complex obj)
{
    Complex temp;
	temp.real = real + obj.real;
	temp.img  = img  + obj.img;
	return (temp);
}

Complex Complex::operator*(Complex obj)
{
    Complex temp;
	temp.real = real * obj.real - img * obj.img;
	temp.img  = real * obj.img  + img * obj.real;
	return (temp);
}

ostream &operator<<(ostream& os, Complex& obj)
{
	os<<"\n"<<obj.real<<"+"<<obj.img<<"i"<<endl;
}

istream &operator>>(istream& is, Complex& obj)
{
	is>>obj.real>>obj.img;
}

int main()
{
	Complex a,b,c,d;
	cout<<"First Complex no. \n Enter Real and Img part : ";
	cin>>a;
	cout<<"Second Complex no. \n Enter Real and Img part : ";
	cin>>b;
	//ADDITION
	c=a+b;
	cout<<"\n\nAddition Operation"<<c<<endl;
	//Multiplication
	d=a*b;
	cout<<"\n\nMultiplication Operation"<<d<<endl;
	return 0;
}

//CODED BY NAITIK FULFAGAR
