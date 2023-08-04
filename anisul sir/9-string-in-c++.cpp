#include<iostream>
using namespace std;

int main()
{
    char name5[] = {'h', 'i'};
    // //stirng is 2 types
    //     1. c style string
    //     2. class type string
    cout<<name5;
    /*
        there are some inbuilt function in c++
            * strlen() --> used to find the length of a string; return integer value
            * strcpy() --> used to copy to string;
            * strcat() --> used to concate two string; concate means + ;
            * strupr() --> used to make all elements of string in a uper case form
            * strlwr() --> used to convert in lowrcase
            * strcmp() --> to compare two string; return intiger;
    */

    //the c++ class string;
    string name = "Fojle";
    cout<<name<<endl;

    string str = "hello";
    string str2 = " how are you";
    string str3 = name; //name's stirng is copied in this stirng;
    cout<<str3<<endl;

    str3 = str + " whats up";
    cout<<str3<<endl;
    return 0;
}