#include <iostream>
#include <cmath>

using namespace std;

class Point;

void distance(Point p1, Point p2);

class Point{

    int x, y;

    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The Point is ("<<x<<","<<y<<")"<<endl;
        }

    friend void distance(Point p1, Point p2);

};

void distance(Point p1, Point p2){
    double diff = ((p1.x - p2.x)*(p1.x - p2.x)) + ((p1.y - p2.y)*(p1.y - p2.y));
    double distance = sqrt(diff);
    cout<<"Distance between ("<<p1.x<<","<<p1.y<<")"<<" and ("<<p2.x<<","<<p2.y<<") is : "<<distance<<endl;

}

int main(){
    
    int x1, x2, y1, y2;

    cout<<"Enter Point 1 - "<<endl;
    cout<<"Enter absicca: "<<endl;
    cin>>x1;    
    cout<<"Enter ordinate: "<<endl;
    cin>>y1;

    cout<<"Enter Point 2 - "<<endl;
    cout<<"Enter absicca: "<<endl;
    cin>>x2;    
    cout<<"Enter ordinate: "<<endl;
    cin>>y2;

    Point p1(x1,y1);
    p1.displayPoint();

    Point p2(x2,y2);
    p2.displayPoint();

    distance(p1,p2);

    return 0;
}