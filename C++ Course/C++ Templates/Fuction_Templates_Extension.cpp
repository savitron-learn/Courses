#include <iostream>

using namespace std;                                                                                                                        

template <class T>                                                                                                                      
class Data{                                                                                                                     

    public:                                                                                                                     

        T data;                                                                                                                     

        Data(T a){                                                                                                                      
            data = a;                                                                                                                       
        }                                                                                                                       

        void display();                                                                                                                     

};                                                                                                                      

template <class T>                                                                                                                      
void Data <T> :: display(){                                                                                                                     
            cout<<data<<endl;                                                                                                                       
}                                                                                                                       

void Function(int a){                                                                                                                       
    cout<<"I am 1st Function"<<endl;                                                                                                                        
}                                                                                                                       

template <class T>                                                                                                                      
void Function(T a){                                                                                                                      
    cout<<"I am Templatized Function"<<endl;                                                                                                                        
}                                                                                                                       

                                                                                                                     

int main(){                                                                                                                     

    Data <float> d(10.25);                                                                                                                      
    cout<<d.data<<endl;                                                                                                                     
    d.display();  

    Function(56);         // Exact Match Takes Highest Priority
    Function(5.005);       



    return 0;                                                                                                                       
}                                                                                                                       