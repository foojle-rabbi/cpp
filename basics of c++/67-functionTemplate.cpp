#include<iostream>
using namespace std;

template <class t1, class t2>
void myFunction(t1 a, t2 b){
    t1 c = a;
    t2 d = b;

    cout<<c<<endl<<d<<endl;
}

int main()
{
    /*
    Amra je chiaile function er moddheo je tempalte (mane function er parameter/arguments type o tempalte) er maddhome nite 
    pari oi tai ei code/tutorial e bola hoiche;

    tobe amra class e use krole je <type> leikha deoya lagto eikhane oi type leikah deoya lage na. automatic nia ney;
    */

    myFunction(23, "Jannatul Islam Jakia"); //etai beshi kichu na;
    return 0;
}