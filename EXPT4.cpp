#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream os1;
	os1.open("name.txt");
	os1<<"Naitik"<<endl;
	os1<<"Rahul"<<endl;
	os1<<"Komal"<<endl;
	os1<<"Radhika"<<endl;
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
