#include<iostream>
using namespace std;

class student{
    public: 
    int age;

    // void greatingss(){
    //     cout << "Assalamu alaikum" << endl;
    // }
    void greatings();

    void yourAge(int age){
        string name;
        cin >> name;
        cout << "Your age is: " << age << endl << "Your name is: " << name << endl;
    }
};

void student :: greatings(){
    cout << "Assalamu alaikum" << endl;
    // cout << "Age is : " << stu1.age << endl;
}

int main()
{
    student stu;

    // stu.age = 19;
    stu.greatings();

    stu.yourAge(5);

    cout << "size of student object: " << sizeof(stu) << endl;

    return 0;
}