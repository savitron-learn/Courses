#include <iostream>
#include <vector>

using namespace std;

template <class T>
void display(vector <T> &v){
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
    vector <int> vec1; // zero-length vector
    int a,size;
    
    cout<<"Enter the Size of Vector: ";
    cin>>size;

    for(int i = 0; i < size; i++){
        cout<<"Enter the Element Of Vector: ";
        cin>>a;
        vec1.push_back(a);        
    }
    display(vec1);

    vec1.pop_back();
    display(vec1);

    vector <int> :: iterator it;
    it = vec1.begin();
    // obj.insert(iterator, no of copy, element to be inserted)
    vec1.insert(it,100);
    vec1.insert(it+3,2,100);
    display(vec1);

    vec1.at(2) = 50;
    display(vec1);

    vector <char> vec2(4); // 4-element character vector
    vector <char> vec3(vec2); // 4-element character vector from vec2
    vector <int> vec4(4,13); // 6-element vec tor of 3sss
    int b, s = 5;
    display(vec4);
    cout<<vec4.size();


    return 0;
}