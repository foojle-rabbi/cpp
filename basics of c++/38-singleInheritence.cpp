#include<iostream>
using namespace std;

class father{
    int color;
    string address;
    public:
        string name;
        void displayAddress(){
            cout<<"Address: "<<address<<endl;
        }
};

class son : public father{
    public:
        void displayName(void){
            cout<<"Nmae: "<<name<<endl;
        }
};

int main()
{
    /*
    Er ager code ami ja explain krochi ekhaeno motuti tai e. Prothomoto single inheritence holo ekta base class ekta derieved
    class. jemon [a-->b];

    ar ekhane jei ta nia kotha koichilam ta holo, visibility mode nia. ekhon kotha hoite pare visibility mode nia eto. kahhini
    keno? na kahini na. 

    visibility mode jodi "private" thake tahole base class er "public member" gula "derived clss" er "private member" hoiya 
    jay. ar mode jodi "ppublic" hoy tahole base class er "public membe"r deivied calss er o "public member". Ar Base class er 
        "private member kokhono access able na". kono vabei na...

    Haaa tobe ekta kotha. base class er public function dia kintu chile base class er private member re access kora jay...
    */
    return 0;
}