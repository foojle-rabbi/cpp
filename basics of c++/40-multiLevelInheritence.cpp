#include<iostream>
using namespace std;

class student{
    protected:
        int roll;
        float gpa;
        void show(void){
            cout<<"roll: "<<roll<<endl;
            cout<<"Gpa: "<<gpa<<endl;
        }
};

class exam : public student{
    protected: 
        int physics;
        int chemistry;
        int math;
    public:
        void setDetails(int roll, float gpa, int physics, int chemistry){
            this -> roll = roll;
            this -> gpa = gpa;
            this -> physics = physics;
            this -> chemistry = chemistry;
        }
};

class result : public exam{
    public:
        void getDetails(void){
            // show();
            cout<<"roll: "<<roll<<endl;
            cout<<"gpa: "<<gpa<<endl;
            cout<<"physics and chemistry average marks: "<<(float) (physics + chemistry / 2)<<endl;
        }
};

int main()
{
    /*
        no need to take pera. cause inheit concepts are smae. but you just need to understtnad the access modifires weelly..

        ar multilevel meands [a-->b-->c]

        taile etai. code ta dekho multilevel buijha jaib. je kivabe ekta class er moddhe onno class er member /fucniton
        use kroa jay..;
    */

    result Fojle;
    Fojle.setDetails(1152, 4.56, 82, 88);
    Fojle.getDetails();
    return 0;
}