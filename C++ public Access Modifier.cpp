#include <iostream>
using namespace std;

// define a class
class Student{

public:
    int age;
    string name;
    string disName()
    {cout<<"name is ";
    return name;
    }
    void disAge(){cout<<age<<endl;}

    };
    int main(){
    Student obj1;
    cout<<"name:";
    cin>>obj1.name;
    cout<<"age:"<<endl;cin>>obj1.age;
cout<<obj1.disName()<<endl;
cout<<"age :";    obj1.disAge();
    Student o2;
    cin>>o2.name>>o2.age;
    cout<<o2.disName()<<endl;
   cout<<"age: "; o2.disAge();
    }
