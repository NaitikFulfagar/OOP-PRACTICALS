/*Write a C++ program that creates an output file, writes information to it, closes the file, open
it again as an input file and read the information from the file.*/

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream os1;
	os1.open("name.txt");
	os1<<"Naitik"<<endl;
	os1<<"Rahul"<<endl;
	os1<<"Ram"<<endl;
	os1<<"Shyam"<<endl;
	os1.close();
//************************************************
	ofstream os2;
	os2.open("dep.txt");
	os2<<"Owner"<<endl;
	os2<<"CEO"<<endl;
	os2<<"Employee"<<endl;
	os2<<"Chief Employee"<<endl;
	os2.close();
//*************************************************
	
	ifstream is1,is2;
	char data[80];

	is1.open("name.txt");
	is2.open("dep.txt");
	while(is1,is2)
	{
	is1.getline(data,80);
	cout<<data<<"\t";
	is2.getline(data,80);
	cout<<data<<endl;
	}
	is1.close();
	is2.close();
	
	return 0;

}

//CODED BY NAITIK FULFAGAR
