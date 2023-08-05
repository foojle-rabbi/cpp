#include<iostream>
using namespace std;

//two normal function
class person{
    string name;
    int age;
    public:
        void setValue(string name, int age){
            this -> name = name;
            this -> age = age;
        }

        void display(){
            cout<<"person name: "<<name<<endl;
            cout<<"person age: "<<age<<endl<<endl;
        }
};

class student{
    string name;
    int age;
    int roll;
    double gpa;
    public:
        void setValue2(string name, int age, int roll, double gpa){
            this -> name = name;
            this -> age = age;
            this -> roll = roll;
            this -> gpa = gpa;
        }

        void display2(void){
            cout<<"student name: "<<name<<endl;
            cout<<"student age: "<<age<<endl;
            cout<<"student roll: "<<roll<<endl;
            cout<<"Student gpa: "<<gpa<<endl;
        }
};

//Example of inheritence
class a{
    public:
        string name;
        int age;

        void setValue(string name, int age){
            this -> name = name;
            this -> age = age;
        }

        void display1(void){
            cout<<"name : "<<name<<endl;
            cout<<"age : "<<age<<endl;
        }
};

class b : public a{
    int roll;
    float gpa;
    public:
        void setValue(string name, int age, int roll, float gpa){
            this -> name = name;
            this -> age = age;
            this -> roll = roll;
            this -> gpa = gpa;
        }

        void display(void){
            display1();
            cout<<"Roll : "<<roll<<endl;
            cout<<"gpa: " <<gpa<<endl;
        }
};

int main()
{
    /*
        1. what is inheritenche?
            * The process of obtaining the data member and functions from one class is known as inheritence;
        2. What is the importance of inheritence?
            1. code re-usability
            2. Application development time is less;
            3. Application takes less memory;
            4. Less execute time.
    */

    person p;
    p.setValue("person name", 18);
    p.display();

    student stu;
    stu.setValue2("student name", 16, 1152, 4.56);
    stu.display2();

    /*
        okay fojle uporer code / program ta dekh. eikhane 2 ta class bancichi. ekta person er jonno arek student er jonno
        ekhane 2 ta tei kichu similary ache. ba bolte paros kichu kichu 2 tatei lekhchi. tai tar jonno code koto boro hoiche
        ei tui nicher code/program ta dkeh. same e just person = 'a' ar student re 'b' dhormu;
    */

    a object;
    object.setValue("object 1", 18);
    object.display1();

    b object2;
    object2.setValue("Object 2", 13, 1152, 4.11);
    object2.display();

    /*
        dekh ei code ta te ami ki korchi. prothome a ar b name 2 ta class declare korchi. jehetu amar "b" class e o name
        ar age lagbo. tai ami abar double koira b class e "name and age" declare kori nai. ami a re b er moddhe inherit
        korchi. jar karone ami ekhon chaile oi "a" class er shokol variabel ar function use korte parum. 

        jemon ta ami korchi "b" class e. ami notun koira name ar age declare kori nai. borong ami a er "name and age" ar
        display funciton ta use korchi jar karone amar abar ei "variabel name and display function create kora lage nai"

        ar etai hoilo inherite.
    */
    
    
    /*
        arek ta kotha:
            upore a class re bola hoy: parent class / base class / super class / mother class;
            ar b class re bolay hoy: child class / derieved class / sub class / daughter class;

    */

    return 0;
}