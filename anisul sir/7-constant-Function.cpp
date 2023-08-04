#include<iostream>
using namespace std;

class student{
    int roll;
    float gpa;

    public:
        void display() const;
};

void student :: display() const{
    cout<<"inside the display function"<< endl;
}

int main()
{
    student fojle;
    fojle.display();
    /*
        jani na anisul mia kemne oi video te dekhailo je constant function ke invoke korte hole main funciton e o object ta
        constant hote hobe ta na hole kaj korbe na. kintu amar ekhaen di non constant houar por o oi constant functoin
        re call kora jacche. :(
    */
    return 0;
}