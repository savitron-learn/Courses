#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;



int main(){
    
    int arr[] = {4,2,7,8,3,1,0};
    sort(arr, arr+7, greater<int>());
    for(int i = 0; i < 7; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}