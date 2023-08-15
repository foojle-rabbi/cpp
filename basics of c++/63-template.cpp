#include<iostream>
using namespace std;

class vectorTest{ 
    int *arr; //ekhane ami normal int variale use koray ami ei class er moddhe kebol intiger er array e rakhte parmu..
    int size;
};

template <class t>
class vector{
    t *arr; //ekhane nijer iccha moto template use koray ami ekahne jei kono dhoroner variable use krote parmu. eta nijer
    // oi variable er moton behave korbo. tobe main function e ta ullekh kore dite hobe je tumi kon type er chao;
    int size;
};

int main()
{
    /*
    Ajke amra dekhbo template nia. template naki competetive programming e prochur use hoy. 

    template hocche ekta data type er moto. ashole data type er moton na. but eta emon kichu benifit dey jate kore ami chile
    je kono variable use korte parum. jemon ami jodi "template <class test>" use kori er mane ami chiel variable name
    int float, char, double er poriborte test use korte parmu. 

    etar shubidha hoiteche ei je, mone koro ami "int a;" lekhlam tar mane ami a er moddhe kebol intiger e rakhte parmu. ami
    chaile char/float rakhte parum na. (parleo misbehave korbo). kintu eki jaygay ami jodi "test a" declre kori tahole
    ami chile a er moddhe int/float/char/double etc rakhte parum. 

    ar eitai tempalte er shubidha; accha aro valo vabe bujahr jonno uporer class gula dekhte paroch, dekh ekahne ami ekta 
    vector nam e ekta class banaichi, jetate int type er ekta array rakha jay; ekhon ami jodi float rakhte chai taile amar
    abar arekta class banaite hoibo jetate flaot rakha jaibo. thik same vabe ami jodi oi vecotr function e character rakhte
    chai taile amar arekta class banaite hoibo jetate ami char rakhte parum. jeta onek jhamela ar shomoy sapekkho. 

    kintu eki jaygay ami jodi oi int er poriborrte amar nijer template use kori taile ami oi ekta vector class er vitore ei
    baki variable der jonno rakhte partam. amar just khali object declare korar shomoy <specify> koira deoya lagtoo..
    */

    vector <int> intObject; //etar karone ami chaile shudhu ekta class er moddei different data type er variable user korte parum
    vector <float> floattObject;
    vector <char> charObject;
    vector <double> doubleObject;
    return 0;
}