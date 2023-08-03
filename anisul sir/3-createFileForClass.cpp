#include<iostream>
#include"3-info.h"

using namespace std;

int main(){
    myFirstClass object;

    return 0;
}


/*
    my first file 
    3-createFileForClass.cpp
    here are the codes in this file
    #include<iostream>
#include"3-info.h"

using namespace std;

int main(){
    myFirstClass object;

    return 0;
}

    my second file 
    3-info.h
    here are codes
    #ifndef MY_FIRST_CLASS_H
#define MY_FIRST_CLASS_H

class myFirstClass {
public:
    myFirstClass(); // Constructor
};

#endif

    my third file 
    3-info.cpp
    here are the codes,
    //Its the body: 
#include "3-info.h"
#include<iostream>
using namespace std;

myFirstClass :: myFirstClass(){
    cout<<"Inside the constructor"<<endl;
}

 now analyzing the whole file and codes find the problem

*/