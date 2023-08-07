#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string sentence;
    ofstream file;
    file.open("3-details.txt");

    cout<<"Enter a sentence: ";
    getline(cin, sentence);
    file<< sentence<<endl;

    file.close();
    return 0;
}