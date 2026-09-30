#include <iostream>

using namespace std;

template <class T>

class vector{

    int size;
    
    public:

        T *arr;

        vector(int s){
            size = s;
            arr = new T[size];
        }

        T dotProduct(vector &v){

            T d = 0;
            for(int i = 0; i < size; i++){

                d += this->arr[i] * v.arr[i]; // this is used to specify that first object array is used !!!!!

            }
            return d;

        }

};

int main(){
    
    // vector <int> v1(3);         // Any DataType Can be Used                                            
                                   // Any DataType Can be Used                     
    // v1.arr[0] = 5;              // Any DataType Can be Used                                        
    // v1.arr[1] = 3;              // Any DataType Can be Used                                        
    // v1.arr[2] = 2;              // Any DataType Can be Used                                        
                                   // Any DataType Can be Used                     
                                   // Any DataType Can be Used                     
    // vector <int> v2(3);         // Any DataType Can be Used                                            
                                   // Any DataType Can be Used                     
    // v2.arr[0] = 6;              // Any DataType Can be Used                                        
    // v2.arr[1] = 8;              // Any DataType Can be Used                                        
    // v2.arr[2] = 9;              // Any DataType Can be Used                                        


    vector <float> v1(3);

    v1.arr[0] = 1.4;
    v1.arr[1] = 1.5;
    v1.arr[2] = 0;


    vector <float> v2(3);

    v2.arr[0] = 0.5;
    v2.arr[1] = 1.6;
    v2.arr[2] = 1;

    
    cout<<v1.dotProduct(v2)<<endl;


    return 0;
}