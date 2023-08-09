#include<iostream>
using namespace std;

class person{
    string name;
    int age;
    public:
        person(string name, int age = 19){
            this -> name = name;
            this ->age = age;
        }

        void display(void){
            cout<<name<<endl<<age<<endl;
        }
};

int main()
{
    /*
        Fojle etao temon kichu na.... amra funciton er moddhe dekhchi na je, jei kono ekta parameter re default vabe je kono 
        ekta value set kore dite pari. jodi amra oi parameter er kono value nije theke provide na kori, tahole oita auto-
        matic oi vlue re nia nibe...

        thik shevabe ekhaneo constructor er kkhete tai hoy.. nijer code gula dekh aro valo vbe bujhte parbi..
    */

    person p("Jakia");  //ei je ekhane ami "p" person er kkhetre shudhu name ta pass korchi. kono age pass kori nai. tai eta
                        // amr oi default arguent age = 19 vlue ta nia niche;
    p.display();    

    person p2("Jannat", 12); //ar etate jehetu age send kortachi tai age nia niche..
    p2.display();
    return 0;
}