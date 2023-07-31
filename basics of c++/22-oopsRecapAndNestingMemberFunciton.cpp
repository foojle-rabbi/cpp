#include<iostream>
using namespace std;

//nesting of member function
class binary{
    private:    //by default the object are private object no need to write private
        string s;
        void isBinary(void);
    public:
        //here i am declaring fucntion
        void read(void);
        void ones_complement(void);
        void display(void);
};

//here i am "initializing those funcitons"
void binary :: read(void){
    cout<<"Enter a binary Number: ";
    cin>>s;
}

void binary :: isBinary(void){
    int isB;
    for(int i = 0; i < s.length(); i++){    //s.length() is a built in function to have the length of a string
        if(s.at(i) == '0' || s.at(i) == '1'){   //check the value at index i "s.at(i)"
            isB = 1;
        }else{
            isB = 0;
            break;
        }
    }

    if(isB){
        cout<<"The number is a binary number"<<endl;
    }else{
        cout<<"The number is not a binary number\n";
        exit(0);    //for using this if the number is not binary number then it will not call the other function and exit it
    }
}

void binary :: ones_complement(void){
    //this is called nested member of function
    isBinary();
    
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }else{
            s.at(i) = '0';
        }
    }
}

void binary :: display(void){
    cout<<s<<endl;
}

int main()
{
    //OOPs - classes and objects

    //c++ ---> 

    binary b;
    b.read();
    // b.isBinary(); //suppose is binary check if the number is binary or not; now i can call it form the main funciton. but if
    b.display();    //i make this a private funtion than i cant call it from main or other funciton. only can call the 
                    //function that is declare in that class named "binary"
    b.ones_complement();
    b.display();
 
    return 0;
}

/*
    what are those funciton
    read.binary
    check.binary
    display()
    ones_compliment
    display()
*/