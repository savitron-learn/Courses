#include <iostream>
#include <vector>

using namespace std;

int main(){

    // Input Array Length and Night Window
    int n,k;
    cout<<"Enter the value of n and k:"<<endl;
    cin>>n>>k;

    // Input Energy Readings
    vector<int> E(n);
    cout<<"Enter the Array: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>E[i];
    }

    
    // Getting Output 
    int ans = 0;
    for(int i = 0; i <= n-k; i++){
        int sum = 0;
        for(int j = 0; j<k; j++){
            sum += E[i+j];
        }
        if(sum > ans){
            ans = sum;
        }
    }

    cout<<ans<<endl;

    return 0;
}