/*Develop a program in C++ to create a database of students information system containing the
following information: Name, Roll number, Class, Division, Date of Birth, Blood group, Contact
address, Telephone number, Driving license no. and other. Construct the database with
suitable member functions. Make use of constructor, default constructor, copy constructor,
destructor, static member functions, friend class, this pointer, inline code and dynamic
memory allocation operators-new and delete as well as exception handling.*/

#include<iostream>
#include<string.h>
using namespace std;


class studata{
	int rno; 
	long int mob;
	char cls[5],div[1],dlno[15],dob[10],bg[2];
	friend class sdata;
	
	studata()
	{
		rno=0;mob=0;
		strcpy(cls,"a");
	}
	studata(studata &o)
	{
		rno=o.rno;
		mob=o.mob;
		strcpy(cls,"a");
	}
	~studata()
	{}
	
	
};

class sdata{
	public:
	char name[20];
	static int count;
	studata x;
	inline void accept(char name[20]);
	
	
	inline void display();
	
	static void showcount(){
		cout<<"\n\n Enter details of Students is "<<count<<endl;
	}
	
		
};

void sdata::accept(char name[20])
{
		strcpy(this->name, name);
		cout<<"\nEnter Roll no.: ";
		cin>>x.rno;
		cout<<"\nEnter Class: ";
		cin>>x.cls;
		cout<<"\nEnter Division: ";
		cin>>x.div;
		cout<<"\nEnter Date of Birth: ";
		cin>>x.dob;
		cout<<"\nEnter Blood group: ";
		cin>>x.bg;
		cout<<"\nEnter Mobile no.: ";
		cin>>x.mob;
		cout<<"\nEnter Driving license no.: ";
		cin>>x.dlno;
		count++;
	}
	
void sdata::display()
	{
		cout<<"\n"<<name<<"\t\t"<<x.rno<<"\t\t"<<x.cls<<"\t\t"<<x.div<<"\t\t"<<x.dob<<"\t\t"<<x.bg<<"\t\t"<<x.mob<<"\t\t"<<x.dlno;
	}
	
int sdata::count = 0;

int main()
{		
	int tno,ch,i;
	cout<<"\nEnter No of Students";
	cin>>tno;
	
	sdata* obj=new sdata[tno];
	sdata objnew(*obj);
	cout<<"\n\n\n\n**************Student Entry Module*********************";
	char name[20];
	do
	{
		cout<<"\n1.Enter Student Details";
		cout<<"\n2.Display Student Details";
		cout<<"\n3.Exit";
		cin>>ch;
		switch(ch)
		{
		case 1:
			{
				
				cout<<"\nEnter name: ";		
				cin>>name;
				obj[sdata::count].accept(name);
				break;
			}
		case 2:
			{
				cout<<"\nName:"<<"\tRoll no.: "<<"\tClass: "<<"\t\tDivision: "<<"\tDate of Birth: "<<"\tBlood group: "<<"\tMobile no.: "<<"\tDriving license no.: ";
		
				for(i=0;i<sdata::count;i++)
				{
					obj[i].display();
				}
				sdata::showcount();
				break;
			}
		}
	}
while (ch != 3);
delete []obj;
}
