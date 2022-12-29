/*
Write a program in C++ to use map associative container. The keys will be the names of
states, and the values will be the populations of the states. When the program runs, the
user is prompted to type the name of a state. The program then looks in the map, using
the state name as an index, and returns the population of the state. 
*/

#include <iostream>
#include <map>
using namespace std;

void display(map<string, float> &m){
    map<string, float>::iterator it;
    cout<<"State \t Population(in Cr.) "<<endl;
    for(it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<" \t "<<it->second<<endl;
    }
}

int main(){
    map<string, float> stateInfo;
    int choice;
    string state;
    float population;

    do{
        cout<<"---MainMenu---"<<endl;
        cout<<"\n1.Insert state";
        cout<<"\n2.Display";
        cout<<"\n3.Search State";
        cout<<"\n4.Delete";
        cout<<"\n5.Exit"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>choice;

        switch(choice){
            case 1:             
                cout<<"Enter Name of the State: ";
                cin>>state;
                cout<<"Enter State Population(in Cr): ";
                cin>>population;
                stateInfo.insert({state, population});
                break;
            
            case 2:
                display(stateInfo);
                break;
            
            case 3:
                cout<<"Enter state to look up: ";
                cin>>state;
                if(stateInfo.count(state) != 0)
                {
                    cout<<stateInfo.find(state)->second<<endl;
                }
                else
                {    
                    cout<<"State is not present"<<endl;
                }
                break;
            
            case 4:                
                cout<<"Enter State you want to delete: ";
                cin>>state;
                if(stateInfo.count(state) != 0)
                {
                    stateInfo.erase(state);
                    cout<<"State has been deleted"<<endl;
                }
                else
                {    
                    cout<<"State is not present"<<endl;
                }
                break;
            
            default:
                if(choice == 5)
                    continue;
                cout<<"Invalid input";
                break;
        }
    }
    while(choice != 5);
}
//Coded by Naitik Fulfagar