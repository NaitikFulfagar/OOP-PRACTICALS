//Write a C++ program that creates an output file, writes information to it, closes the file, open
//it again as an input file and read the information from the file.
#include<iostream>
#include<fstream>
using namespace std;

class empDet
{
    public:
    string name;
    int id;
    float salary;
    void accept()
	{
		cin>>name;
		cin>>id;
		cin>>salary;
	}


	void display()
	{
		cout<<"\n\n"<<name<<"\t- "<<id<<"\t- "<<salary<<endl;
	} 
};

int main()
{
    int i,n;
    cout<<"How many Employee Details you want to Create ? ";
    cin>>n;
    empDet obj[n];
    fstream o;

    o.open("info.txt");
   	cout<<"\n Enter information of "<<n<<" Employees (Enter name, emp_id, salary)\n";
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter Information of "<<i+1<<" Employee : ";
        obj[i].accept();
        o.write((char*)&obj[i],sizeof(obj[i]));

    }
    o.close();
    

    o.open("info.txt",ios::in);
    cout<<"\n"<<"name"<<"\t- "<<"id"<<"\t- "<<"salary";
    for(i=0;i<n;i++)
    {        
	o.read((char*)&obj[i], sizeof(obj[i])); //read data from employee
        obj[i].display();
    }
    o.close();
    return 0;
}
