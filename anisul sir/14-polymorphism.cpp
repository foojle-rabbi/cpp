#include <iostream>
using namespace std;

class person{
    public:
        virtual void display(void){
            cout<<"Display function of person"<<endl;
        }
};

class student : public person{
    public:
        void display(void){
            cout<<"Display funciton of student"<<endl;
        }
};

class teacher : public person{
    public:
        void display(void){
            cout<<"display function of teacher"<<endl;
        }
};

int main()
{
    /*
        polymorphism
        = poly + morphism (2 greek words)
        = many forms

        there are 2 types of polymorphism:
            1. compile time polymorphism;
            2. Run time polymorphism;

        1. compile time polymorphism / static polymorphism (or early) binding;
            example: "function overloading"

        2. Run time polymorphism / dynamic (or late) binding;
            example: "function overriding"
    */

    person p;
    student s;
    teacher t;

    p.display();
    s.display();
    t.display();

    /*
        accha sohoj kothay jodi bekkha dei taile; polymorphism hoiteche ekta function er many form. ekhon upore je class
        gula dkekhli, oigula e chinta kor. jemon ami < person, student, teacher > nam e 3 ta class declare korchi. ar proti
        tar moddhe e "display function ache" ekhon kotha holo jodi ei gulare inherit na koroch. taile eigular alada alada
        object create koira display function re class dile alada alada class er display function call korbe which is 
        alright. 

        kintu tui tui person class re baki gulare inherit koroch taile, ei "display" function person class e o thakte hoibo.
        na thakle baki gulare pointer dia class korte parbi na. kintu jodi inherit koroch taile khub sohoje "super class" er
        ekta pointer create koira baki class er display function re call kora jay. jemon ta niche dekhano hoice;

        nicher code gulare dkhle aro vlo vabe bujhte parbi. dekh jehetu "person class" ta hoitache super class ar "student" ar
        teacher hoiteche subclass tai ami SUPERCLASS er pointer create koira baki gulare call korchi(pointer dia);

        arekta kotha super class e kintu display function thaka labo ebong ebong "(virtual)" keyword ta use korte hobe. na hole
        hobe naaa.
    */

    person *ptr = &p;
    ptr ->display();

    ptr = &s;
    ptr ->display();

    ptr = &t;
    ptr ->display();

    return 0;
}