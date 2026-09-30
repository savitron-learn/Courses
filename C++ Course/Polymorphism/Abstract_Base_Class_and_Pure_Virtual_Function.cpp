#include <iostream>
#include <cstring>
#include <string>


using namespace std;

class CWH{

    protected:

        string title;
        float rating;

    public:

        CWH(string s, float r){
            
            title = s;
            rating = r;

        }

        virtual void display() = 0; // -----> do-nothing function ====> Pure Virtual Function  |||||||||||||||||||||||

};

class Video : public CWH{

    private:

        float videoLength;

    public:

        Video(string s, float r, float vl) : CWH(s,r){

            videoLength = vl;            

        }

        void display(){

            cout<<"Video Title: "<<title<<endl;
            cout<<"Rating Of Video (out of 5 Star): "<<rating<<endl;
            cout<<"Video Length: "<<videoLength<<" minutes"<<endl;

        }

};

class Text : public CWH{

    private:

        int words;

    public:

        Text(string s, float r, int wc) : CWH(s,r){

            words = wc;

        }

        void display(){

            cout<<"Video Title: "<<title<<endl;
            cout<<"Rating Of Video (out of 5 Star): "<<rating<<endl;
            cout<<"No of Word: "<<words<<endl;

        }

};

int main(){
    
    string title = "C++ Tutorial";
    float rating = 4.23, vl = 4.56;
    int words = 548;;

    // title = "C++ Tutorial";
    // vl = 4.56;
    // rating = 4.99;
    // Video cvideo(title, rating, vl);
    // cvideo.display();
    
    // title = "Java Text Tutorial";
    // words = 548;
    // rating = 4.23;
    // Text ctext(title, rating, words);
    // ctext.display();
    
    CWH * tuts[2];
    Video cvideo(title, rating, vl);
    tuts[0] = &cvideo;
    
    rating = 3.56;
    Text ctext(title, rating, words);
    tuts[1] = &ctext;
    
    tuts[0]->display();
    tuts[1]->display();


    return 0;
}