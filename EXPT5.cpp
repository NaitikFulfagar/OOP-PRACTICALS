// Selection Sort Using Templates.
#include<iostream>
#define size 10
using namespace std;

int n;
template<class T>

void selection(T A[size])
{ 
   int i,j,min;
    T temp;
    for(i=0;i<n-1;i++){ 
       for(j=i+1;j<n;j++){   
            if(A[j]<A[i]){
            
                temp=A[j];
                A[j]=A[i];
                A[i]=temp;
            }
       }
    }
    cout<<"\n The sorted list is:.../n";
    for(i=0;i<n;i++)
      cout<<"\t"<<A[i];
}

int main()
{   
    int i,A[size];
    float B[size];
    cout<<"\n\t\tSelection Sort\n";
    cout<<"\n\tHandling Interger Elements";
    cout<<"\nHow Many Elements Are There???";
    cin>>n;
    cout<<"\nEnter the integer numbers";
    for(i=0;i<n;i++)
        cin>>A[i];
    selection(A);
    cout<<"\n\t\tHandling Float Elements\n";
    cout<<"\nHow Many Elements Are There???\n";
    cin>>n;
    cout<<"\n Enter the Float numbers";
    for(i=0;i<n;i++)
        cin>>B[i];
    selection(B);
    cout<<"\n";
    return 0;
}