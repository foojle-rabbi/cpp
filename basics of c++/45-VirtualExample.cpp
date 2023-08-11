#include<iostream>
using namespace std;

class student{
    protected:    
        int roll;
    public:
        void set_roll(int x){
            roll = x;
        }

        void get_roll(void){
            cout<<"Roll NO: "<<roll<<endl;
        }
};

class test : virtual public student{
    protected:    
        int math;
        int physics;
    public:
        void set_marks(int math, int physics){
            this -> math = math;
            this -> physics = physics;
        }

        void get_marks(void){
            cout<<"Math marks: "<<math<<endl;
            cout<<"physics marks: "<<physics<<endl;
        }
};

class sports : virtual public student{
    protected:
        int sports;
    public:
        void set_sportsMarks(int marks){
            sports = marks;
        }

        void get_sportsMarks(void){
            cout<<"Sports marks: "<<sports<<endl;
        }
};

class result : public test, public sports{

};

int main()
{
    /*
        code tar jodi ekta small explanation dei. taile bola jay jeee. ami student theke "test ar sport" 2 ta class banaichi
        tar mane ei 2 tatei "roll" variable choila geche. abar jokhon ami result create korchi tokon result er super class/ 
        base class chilo "test and sports" so ei 2 ta thekei "roll variable" choila ahar kotha. ar emon tai hoiche. toh jokhon
        ami result class er object "r" create korchi ebong "set_roll()" korchi tokhn compiler bujhte partechen na ashole kon tar
        moddhe ba kon class er jonno (set roll()) funciton call korbo. ar e jonnoi error dekhaitechilo..

        so jokhon abar ami test ar sports create kroar shomoy (virtal) key word use krochi tokhn abar ei eroor choila geche..

        hoyto valo vabe bujhaite pari nai. but i think it would be enough..
    */
    result r;
    r.set_roll(1152);
    r.get_roll();
    r.set_marks(88, 91);
    r.get_marks();
    r.set_sportsMarks(9);
    r.get_sportsMarks();
    return 0;
}