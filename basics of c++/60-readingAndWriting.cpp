#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    /*
    are fojle mia etto pera nio na file nia; karon etare joto pera khoayr moto mone hoy totota pera neoyar jinish eta na;
    karon file er 2 ta main purpose:
        1. read from file;
        2. write in file;
    toh ei 2 ta kar korte parlei file er kahini shesh;

    ekhon file nia kaj korte hole prtome <fstream> header file include korte hobe tar moddhe 2 ta class thakbe:
        1. ofstream -> means = output form file. mane file e write korar jonno ei class use kora hoyj;
        2. ifstream -> ar if stream dia file kono kichu read korar jonno use kroa hoy;

    file 2 vabei access kora jay ekta constructor dia ar arekta open() close() dia;


    */
    //etai hocche construcotr er sahajje file access kroa;
    // ofstream object("60-write.txt");
    // object<<"hi this is first file\n"; 

    //open close er maddhome access kora
    // ofstream obj;
    // obj.open("60-write.txt");
    // string s = "HI this is me";
    // obj<<s;
    // obj.close();

    ifstream hout;
    hout.open("60-write.txt");
    // hout>>s; //jodi cout ba evabe input nes taile kebol first word ta print hobe ei problem solve krte "getline" use korte hbe;
    // getline(hout, s); //ekhane abar arek problem; getline dile kebol ekta line print korbe;
    // pura file ki ache ta print korar jonno while loop use kora jete pare
    string s;
    while(hout.eof() == 0){
        getline(hout, s);
        cout<<s<<endl;
    }
    hout.close();
    return 0;
}