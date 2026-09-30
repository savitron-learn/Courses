#include <iostream>

using namespace std;

class Shop{

    private:

        int Id;
        float price;

    public:

        void setData(int a, float b){
            Id = a;
            price = b;
        }

        void getData(){
            cout<<"Code of This item is "<<Id<<endl;
            cout<<"Price of This item is "<<price<<endl;
        }
};

int main(){
    
    Shop *shop = new Shop[3];
    Shop *shopTemp = shop;

    int id, p;
    for(int i = 0; i < 3; i++){

        cout<<"Id of Item "<<i+1<<": "<<endl;
        cin>>id;
        cout<<"Price of Item "<<i+1<<": "<<endl;
        cin>>p;

        // (*shop).setData(i,p);
        shop -> setData(id,p);
        shop++;

    }

    for(int i = 0; i < 3; i++){

        cout<<"Item No: "<<i+1<<endl;
        shopTemp -> getData();
        shopTemp++;

    }

    

    return 0;
}