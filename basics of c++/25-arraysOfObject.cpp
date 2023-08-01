#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;
    public:
        void setId(void){
            salary = 225;
            cout<<"Enter the employee id: ";
            cin>>id;
        }

        void getId(void){
            cout<<"Employee id: "<<id<<" Employee salary: "<<salary<<endl;
        }
};
int main()
{
    employee glassdor[5];

    for(int i = 0; i < 5; i++){
        glassdor[i].setId();
        glassdor[i].getId();
    }
    return 0;
}