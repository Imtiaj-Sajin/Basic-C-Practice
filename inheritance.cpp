/*Inheritance:the process of obtaining the
 data members & functions from one class to another class*/
 #include<iostream>
using namespace std;

class person{
public:
    string name;
int age;
void display1()
{
    cout<<"Name: "<<name<<endl;
    cout<<"age: "<<age<<endl;
}
};
class student:public person{
//name,age,display1
public:
int id;
int display2(){
    cout<<"ID: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"age: "<<age<<endl;
}
};

int main(){
student s1;
s1.id=221;
s1.name="sajin";
s1.age=87;
s1.display2();
}
