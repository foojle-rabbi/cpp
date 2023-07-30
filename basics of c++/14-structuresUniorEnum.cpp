#include <iostream>
using namespace std;

//structure is a user define data types
struct employee{
    int epmId;
    int age;
    float salary;
    char fvChar;
};

int main()
{
    struct employee isman;
    
    isman.epmId = 995;
    isman.age = 19;
    isman.fvChar = 'J';
    isman.salary = 12000;

    cout<<"isman's employedd id : "<<isman.epmId<<endl;
    cout<<"isman's age is : "<<isman.age<<endl;
    cout<<"isman's favourite character is : "<<isman.fvChar<<endl;
    cout<<"isman's salary is : "<<isman.salary<<endl<<endl;

    // also there is a option of typedef
    typedef struct employee emp;
    emp rohan; //now not using "struct employee" i can only use "emp" which is an alias;
    rohan.age = 18;
    rohan.epmId = 243;
    rohan.fvChar = 'M';
    rohan.salary = 5055;

    cout<<"rohan's employedd id : "<<rohan.epmId<<endl;
    cout<<"rohan's age is : "<<rohan.age<<endl;
    cout<<"rohan's favourite character is : "<<rohan.fvChar<<endl;
    cout<<"rohan's salary is : "<<rohan.salary<<endl;


    //union is also a user define data types
    union money{
        int bdt;
        char ringit; //here only you can use one "data types" at a time
        float usd;
    };

    // suppose 
    union money test;
    test.bdt = 225;
    test.usd = 50; //you can not use more than one data types form union at a time. //here you initialized two datas thats why the 
                    //bdt value will show garbage value and the "usd" will show the current value;

    cout<<test.usd<<endl; //if you try to print the vlaue of other expect <usd> they all will show garbage vlaue;

    enum meal {breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    //as it become a user data types you can do 
    meal m1 = breakfast;
    cout<<m1<<endl;
    
    return 0;
}