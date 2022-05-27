#include <iostream>
#include <windows.h>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <iomanip>

using namespace std; 

void Enterance(){
    cout<<setw(25)<<"*********************************"<<endl;
    cout<<setw(25)<<"          Night Market           "<<endl;
    cout<<setw(25)<<"*********************************"<<endl;    
     time_t now = time(0);
     char* dt = ctime(&now);
     cout <<setw(25)<< dt << endl;

}

int main(){
    Enterance();
    
}