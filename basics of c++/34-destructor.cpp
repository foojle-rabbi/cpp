#include<iostream>
using namespace std;

class des{
    int p;
    public:
        des(void){
            cout<<"Constructor is called"<<endl;
        }

        ~des(void){
            cout<<"destrucotor is called"<<endl;
        }
};
int main()
{
    /*
        Okay mr. fojle; tui to destructor er pura video valo koira dekhos nai.. tobe er aage tor ei topic ta somporke valo
        knowledge ahce ami jani..

        destructor hocche kono class ke destroy kore dey after eatar kaaj shesh hole.. destructor o construcotr er motoi
        smae name ar public section e create korte hoibo. tobe change khali er age "~" tild sign boshbo..
    */

    des check;
    return 0;
}