#include<iostream>
using namespace std;

class student{
    int roll;
    float gpa;
    public:
        student(void){
            roll = 1152; //eta hoitache default construcotr; je kina kono vlue ba parameter nitahce an.
            gpa = 4.56;
        }

        student(int roll, float gpa){
            this -> roll = roll;    //eta jehetu parameter nitache tai etare parameterized constructor bole.
            this -> gpa = gpa;
        }

        void display(void){
            cout<<"Roll no : "<<roll<<endl;
            cout<<"gpa: "<<gpa<<endl;
        }
};

int main()
{
    /*
        shon vai, parameterized constructor kichui na. bujhchot ami ki koichi? kichui na, ekhon shon kichui na mane ki. ...
        amra jani constructor hoitache kono ekta class er same name e thakbo ebong tar kono return type thakbo na.

        ar tar jonnoi je constructor er moddhe parameter pass kora jay takei parameterized constructor bole.

        ei program ta vlao kore dkehlei bujhte parbi..
    */
    student Jhim;   //jehetu kono value pass kori nai tai default constructor invoke hoiche.
    Jhim.display(); 

    student jannat(5, 4.12); //parameterized constructor called hoiche
    jannat.display();

    Jhim = student(1, 5.00); //ei system tare koy object overWriting.
    Jhim.display(); 
    return 0;
}