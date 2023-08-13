#include<iostream>
using namespace std;

void showName(string name){ 
    // name = name; //this will throw error!
    // this -> name = name; //what is menas by nonStatic member funciton// ask chatgpt and solve the error!/
    cout<<"Your name is : "<<name<<endl;
}

int main()
{
    /*
        tui toh this operaotor er normal uses aggei dekhchos ekhaneo tai.. jemon tui jodi ekta function banach jetar moddhe
        agument ney. abar je argument nibi ar jar moddhe assign korbi tader name jodi same hoy. tahole desire output paoya
        jaibo na. 

        ar ei problem solve korar jonnoi ahce "this ->" keyword/operator..
    */

    showName("Fojle");
    return 0;
}