#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age,roll_number;
    string grade;
    
};

int main(){ 
    Student s1;
    s1.name ="rahul";    //s1 is object 
    s1.age =10;
    s1.roll_number = 241232;
    s1.grade = "A";

    Student s2;
    s2.name ="keshav";
    s2.age =12;
    s2.roll_number = 241237;
    s2.grade = "B";

    cout<<s1.age<<" "<<endl;
    cout<<s1.name<<" "<<endl;

    cout<<s2.age<<" "<<endl;
    cout<<s2.name<<" "<<endl;
}