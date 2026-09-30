#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    
    vector<int> E(n);
    cout<<"Enter the Array: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>E[i];
    }

    for(int i = 0; i<n; i++){
        cout<<E[i];
    }

    return 0;
}