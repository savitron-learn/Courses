#include <iostream>

using namespace std;

int main(){
    
    // ********************** Break **********************


    for(int i = 0; i <= 40; i++){
        cout<<"Hi "<<i<<"!"<<endl;
        if(i == 15){
            break;
        }
        cout<<i<<endl;
    }


    // ********************** Continue **********************


    for(int j = 1; j <= 40; j++){
        
        if((j%2) == 0){
            cout<<"ERORR"<<endl;
            continue;
        }
        cout<<j<<endl;
    }
    return 0;
}