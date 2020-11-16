#include<iostream>
using namespace std;

class human{
    int no;
    string name;

    public:
    human(string iname,int ino){
        name=iname;
        no=ino;
    } 
    void display(){
        cout<<name<<endl<<no<<endl;
    }
    friend void display(human man);
};

void display(human man){
    cout<<man.name<<endl<<man.no<<endl;
}

int main(){
human obj("sidak",45);
display(obj);
}