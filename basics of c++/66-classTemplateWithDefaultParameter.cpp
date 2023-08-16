#include<iostream>
using namespace std;

template <class t1=int, class t2=char>
class test{
    t1 data1;
    t2 data2;
    public:
        test(t1 a, t2 b){
            data1 = a;
            data2 = b;            
        }

        void display(void){
            cout<<data1<<endl<<data2<<endl;
        }
};

int main()
{
    /*
    Accha thik ache, class template with default parameter mane hoitache amra template class declare korar shomoy e tar moddhe
    ekta default variable type dia dimu, pore chaile seta change krote parmu. kintu first ekta default paramenter dile(seta
    hoite pare flaot, int, char, double etc.) amar pore class declare korar kono type specify na korle hoi default ta ni nibe, 
    jemon: 
            template <class t1 = int, class t2 = char> 
    er mane t1 default vabe int hobe ar t2 default vabe character hobe; tobe ami chaile kintu eigulare pore type change kore
    dite pari.


    */

    // test <> t('D', 'c');   //ei je ekhane type <> er jayga khali rakhci tai eita default paramenter orthat int, char nia niche;
    test <char, float> object('J', 5.2); //Ei je ekhane aisha ami abar default parameter change koira laichi
    object.display();
    return 0;
}