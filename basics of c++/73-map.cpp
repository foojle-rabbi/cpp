#include<iostream>
#include<map>
using namespace std;

int main()
{
    /*
    Map ki ta bujhanor aage ami tore ekta example dei tahole aro sohoje bujhte parbi. mone kor tor kichu student ache ar tara
    tor kache math pore; ar tui ekdin math exam nichoch. ekhon tadeer name and ke math e koto paiche sei number ta store
    kore rakhte chach program er maddhome; ekhon kemone korbi? tar jonnoi ahce maps;


    */

    map<string, int> examPoint;
    examPoint["Jannatul"] = 55;
    examPoint["Sadia"] = 25;

    map<string, int> :: iterator iter;
    for(iter = examPoint.begin(); iter != examPoint.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

    /*
    Ami komu na je eita map re bujhar jonno enough. but ami ekta komu je eta just ekta small basic dharona je kivabe ei stl
    ba function gula kaaj kore . ekhon bakita tui tor needs onujayi use korbi. ar na bujhle toh achei
            --> cppreference.com;
            --> cplusplus.com;
    */
    
    return 0;
}