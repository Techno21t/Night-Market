#include <iostream>
#include <windows.h>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <iomanip>

using namespace std; 

void Enterance(){
    cout<<"*********************************"<<endl;
    cout<<"          Night Market           "<<endl;
    cout<<"*********************************"<<endl;    
     time_t now = time(0);
     char* dt = ctime(&now);
     cout<< dt << endl;
     system("test.cpp");

}

int main(){
    Enterance();
    
}
