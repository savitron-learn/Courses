#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    
    map <string,int> marksMap;
    marksMap["Rohan"] = 98;
    marksMap["Jack"] = 65;
    marksMap["Jene"] = 89;
    marksMap.insert({{"Asuna Yukki", 99}, {"Tessia Eralith", 100}});

    map <string,int> :: iterator it;
    for(it = marksMap.begin(); it != marksMap.end(); it++ ){
        cout<<(*it).first<<" => "<<(*it).second<<"\n";
    }

    cout<<"The size is: "<<marksMap.size()<<endl;

    return 0;
}