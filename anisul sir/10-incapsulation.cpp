#include<iostream>
using namespace std;

class student{
    private:
        int roll;
        float gpa;
    public:
        void setValue(int x, float y);
        void getValue(void);
};

//oikahne declare korchi eikhane use kortachi:
void student :: setValue(int x, float y){
    roll = x;
    gpa = y;
}

void student :: getValue(void){
    cout<<"Roll number is : "<<roll<<endl;
    cout<<"Gpa is : "<<gpa<<endl;
}

int main()
{
    /*
        there are 4 concepts in OOPs
            * Encapsulation
            * Inheritence
            * Polymorphism
            * Abstruction
    */

    /*
        access specifier in c++
            1. public
            2. private
            3. protected
    */

    /*
        Encapsulaiton means data hiding;

        Encapsulation is a process of: 
            1. combining variable and functions in a single unit
            2. protecting data by declaring them as private;

        We use the "setter and getter" funciton to set the value and to get the values;

        **cholo ekhon ashi bangaly: 
            * encapsualiton data hiding chara kichu na.
            * jemon amra jodi private e kono variable declare kori tahole sei variable ke amra onno funciton theke 
              use korte parbo na. 
            * segula kebol member function gula / ba amra bolte pari class er moddhe jei funciton gula thakbe segula
              use korte parbe.
    */

    student object;
    object.setValue(1152, 4.56);    //ekhane ja korlam ta e hocche "Encapsulation"; 
    object.getValue();

    return 0;
}