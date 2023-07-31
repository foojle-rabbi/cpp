#include<iostream>
using namespace std;

class employe{
    int empId;
    // int count = 0;
    static int count;
    public:
        void setId(void){
            count++;
            cout<<count<<" Enter employeee id : ";
            cin>>empId;
        }
        void getId(void){
            cout<<"your employee id : "<<empId<<endl;
        }

        static void getCount(void){
            //cout<<empId;    //here i cant use other variable without the statics ones.
                                //only can use the statics variable
            cout<<"The counter value is: "<<count<<endl;
        }
};

int employe :: count = 1000; //default value is 0   //for initializing this the count variable will work for all the fucntion 
                            //but you can initilize here if you want;
int main()
{
    employe rohan, sohan, sazzad;
    
    rohan.setId();
    rohan.getId();
    rohan.getCount();   //i can use this or/
    employe :: getCount(); // i can use this 

    sohan.setId();
    sohan.getId();
    sohan.getCount();

    sazzad.setId();
    sazzad.getId();
    sohan.getCount();

    return 0;
}

//you have to dry run the "static variabel topic"