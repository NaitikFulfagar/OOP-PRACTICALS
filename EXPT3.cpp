#include<iostream>
using namespace std;

class Publication
	{
	public:
	string title;
	float price;
	bool flag;
	Publication()
		{
		title="none";
		price=0.0;
		}
	void getdetails();
	};


class Book: public Publication
	{
	public:
	int pno;
	bool flag;
	Book()
		{
		pno=0;
		}
	void nopg();
	void showdetb();
	
	};
class Tape: public Publication
	{
	public:
	float min;
	bool flag;
	Tape()
		{
		min=0;
		}

	void getmin();
	void showdett();
	};

void Publication::getdetails()
		{
		cout<<"Enter Title  : ";
		cin>>title;
	
		flag=false;
		while (flag==false)
			{
			cout<<"Enter Price:";
			cin>>price;
			try
				{
				if(price<=0)
				throw price;
				else 
				flag=true;
				}
			catch(float x)
				{
				cout<<"Entered Value is Inncorrect";
				cout<<"Try Again\n";
				}
			}
		}
	void Tape::getmin()
		{
		flag=false;
		while (flag==false)
			{
			cout<<"Enter Time :";
			cin>>min;
			try
				{
				if(min<=0)				
				throw min;
				else 
				flag=true;
				}
			catch(float x)
				{
				cout<<"Entered Value is Inncorrect";
				cout<<"Try Again\n";
				}
			}
		}
void Tape::showdett()
		{
		cout<<"\nTitle Of Tape is : "<<title;
		cout<<"\nPrice Of Tape is : "<<price;
		cout<<"\nTime of Tape is : "<<min;
		}
void Book::nopg()
		{
		flag=false;
		while (flag==false)
			{
			cout<<"Enter No. of Pages :";
			cin>>pno;
			try	
				{
				if(pno<=0)
				throw pno;
				else 
				flag=true;
				}
			catch(int x)
				{
				cout<<"Entered Value is Inncorrect";
				cout<<"Try Again\n";
				}
			}
		}
	void Book::showdetb()
		{
		cout<<"\nTitle Of Book is : "<<title;
		cout<<"\nPrice Of Book is : "<<price;
		cout<<"\nNo. of Pages of Book is : "<<pno;
		
		}
int main()
	{
	int choice;
	Book o1;
	Tape o2;
	while (true)
	{
	cout<<"\n Welcome"<<endl;
	cout<<"\n 1 .Enter Book Details"<<endl;
	cout<<"\n 2 .Enter Tape Details"<<endl;
	cout<<"\n 3 .Show Book Details"<<endl;
	cout<<"\n 4 .Show Tape Details"<<endl;
	cout<<"\n 5 .Exit"<<endl;
	cout<<"\nEnter Choice : ";
	cin>>choice;
	if (choice==1)
		{
		o1.getdetails();
		o1.nopg();
		}

	else if (choice==2)
		{
			o2.getdetails();
			o2.getmin();
		}

	else if (choice==2)
		{
			o2.getdetails();
			o2.getmin();		
		}

	else if (choice==3)
		{
			o1.showdetb();
		}
		
	else if (choice==4)
		{
			o2.showdett();
		}
	else if (choice==5)
		{
		break;
		}
	else
		{
		cout<<"Enter Vaild Output";
		}
	}
	return 0;
}
