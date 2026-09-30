#include <iostream>
#include <string>
#include <fstream>

using namespace std;



int main(){
    
    string s1 = "Sample Text for File I/O --->  Working_with_Files";  
    string s2;

    //****************** Writing Files  ********************
    
    // -----------Using Constructors-----------
    
    ofstream out("Demon Slayer.txt");
    out<<s1<<endl;
    
    //****************** Reading Files  ********************
    
    ifstream in("Demon Slayer.txt");
    // in>>s2;
    getline(in,s2);
    cout<<s2;
    return 0;
}