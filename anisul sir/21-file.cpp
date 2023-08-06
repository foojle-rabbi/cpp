#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    /*
        File:
            1. File is used to store data permanently.
            2. cin and cout method requires <iostream> library.
            3. To read and write in a file we need to add <fstream> library.

            1. "ofstream" data type used to create and write information to files.
            2. "ifstream" data type used to read information from files. 

        ios :: out | ios :: app = use kora hoy file e data/information appeadn korar jonno;

        ar haa, ami chaile "ofstream er pore je nam ta, seta ja mon chay dite parboo"
    */

    string name, quote;

    ofstream kagoj;
    kagoj.open("21.student.txt", ios::out | ios::app);

    cout<<"Enter you name: ";
    getline(cin, name);

    cout<<"Enter a quote that you remember: ";
    getline(cin, quote);

    kagoj<<"his name was: "<<name<<endl<<"his quote was: "<<quote<<endl;

    kagoj.close();
    return 0;
}