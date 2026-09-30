#include <iostream>
#include <list>

using namespace std;

void display(list <int> &lst){
    list <int> :: iterator it;
    for(it = lst.begin(); it != lst.end(); it++){
        cout<<*it<<" ";
    }
}

int main(){
    
    list <int> list1; // List of Zero Length
    int a; 
    int number = 54;   
    for(int i = 0; i < 4; i++){
        // cout<<"Enter the Element Of List: ";
        // cin>>a;
        list1.push_back(number);
        number++;        
    }
    display(list1);
    cout<<endl;

    //  Remove Element from The List
    list1.pop_back();
    display(list1);
    cout<<endl;

    list1.pop_front();
    display(list1);
    cout<<endl;





    list <int> list2(3); // Empty Of Size 7
    list <int> :: iterator it;    
    int i = 34;
    for(it = list2.begin(); it != list2.end(); it++){
        // cout<<"Enter the Element Of List: ";
        // cin>>a;
        *it = i;
        i--;
    }
    display(list2);
    cout<<endl;

    // Removing Elements from The List
    list2.remove(2);
    display(list2);
    cout<<endl;

    // Sorting The List
    list2.sort();
    display(list2);
    cout<<endl;

    // Merging the List
    list1.merge(list2);
    cout<<"After Merge"<<endl;
    display(list1);
    cout<<endl;
    list1.sort();
    display(list1);
    cout<<endl;




    return 0;
}