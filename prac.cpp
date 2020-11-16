#include<iostream>
#include<vector>
using namespace std;
class garden;
class Student{
    public:
    int roll_no;
    string name;
    int cla;
    string names[5];
    
    void no(int x){
        this->roll_no=x;
        cout<<"The no is"<<roll_no<<endl;
    }
    void print_name();
    virtual void getname(string s){
        this->name=s;
        cout<<"The name by virtual ptr "<< name<<endl;
    }

    void insert_names(){
        for(int i=0;i<5;i++){
            cin>>names[i];
        }
    }
    void allname();
    void no(int x,int y){
        this->roll_no=x;
        this->cla=y;
        cout<<"the roll no is "<<roll_no<<endl;
        cout<<"the class no is "<<cla<<endl;
    }
    friend class garden;
};
class library:public Student{
    public:
    int lib_no;
     void getname(string s){
        this->name=s;
        cout<<"The name by base class "<<name<<endl;
    }
    void printdetails(int x){
        this->lib_no=x;
        
        cout<<"The student name is "<<name<<" and the library card no is"<<lib_no<<endl;
    }
};
class Sports:public Student{
    public:
    string sports[5];

    void filldetails(){
        for(int i=0;i<5;i++)
        cin>>sports[i];
    }
    void dis(){
        for(int i=0;i<5;i++)
        cout<<sports[i]<<" ";
        cout<<endl;
        cout<<name;
    }
};
class garden:public Student{
    public:
    int no_of_flowers;
    void showgarden(){
        
        cout<<"The name of  the student is "<<name<<" and total flowers in school"<<no_of_flowers<<endl;
    }

};

class staff{
    public:
    string name;
    int staff_id;
    void set_staff(string x,int b){
        this->name=x;
        this->staff_id=b;
    }

    virtual void show()=0;
};
class clean_staff:public staff{
    public:
    void show(){
        cout<<"The name is "<<name<<"and staff id is "<<staff_id<<endl;
    }
};


void Student::print_name(){
    cout<<"The name of student is"<<name<<endl;
}
void Student::allname(){
    for(int i=0;i<5;i++)
    cout<<names[i]<<" ";

    cout<<endl;
}


int main(){
Student obj;
Student *ptr;
library l;
ptr=&l;
ptr->getname("sidaaa");

// obj.roll_no=15;
// obj.no(25);
// obj.name="Inderpreet";
// obj.name="Sidak";
// obj.print_name();
// // obj.insert_names();
// obj.allname();
// obj.no(332,2);
// obj.getname("sidak");
library ob2;
// ob2.getname("sidak");
ob2.printdetails(22);

Sports ob3;
ob3.filldetails();
ob3.name="sid";
ob3.dis();

garden obj4;
obj4.no_of_flowers=10;
obj4.name="sidak";
obj4.showgarden();

staff *sta;
clean_staff obj6;
sta=&obj6;
sta->set_staff("inder clean",5);
sta->show();


}