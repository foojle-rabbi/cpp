#include<iostream>
using namespace std;

class num{
    int a, b, c;
    public:
        num(){} //eta hoitache default construcotr. eita beboar na korle baki constructor dynamicllay use kora jaibo na..
        num(int x, int y, int z){
            a = x;
            b = y;
            c = z;
        }

        void display(void){
            cout<<"numbers are: "<<a<<" "<<b<<" "<<c;
        }
};

int main()
{
    /*
        Dekha vai Fojle, dynamically mane hoitache run time e kono kichu kora. mane ekta ache program likhar somoy amraa value
        set koira dei, are arekta hoitache amara user er kach theke vlaue nia sei moto kaj kori. ar user theke data nia
        kono kaaj tarei "dyanmically" koy;

        abar eta te ache na construction overloading er feature ache, ekekta parameter er jonno ekek constucotr call hoibo.
    */
    int n1, n2, n3;

    num N(2, 5, 6), N2;
    N.display();

    cout<<endl<<"Enter three values: ";
    cin>>n1;
    cin>>n2;
    cin>>n3;

    N2 = num(n1, n2, n3); //etare koy "object overwrite"..
    N2.display();
    return 0;
}