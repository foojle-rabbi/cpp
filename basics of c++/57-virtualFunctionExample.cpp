#include<iostream>
using namespace std;

class hoy{
    protected:
        string tittle;
        float ratings;
    public:
        hoy(string tittle, float ratings){
            this -> tittle = tittle;
            this -> ratings = ratings;
        }

        virtual void display(void){}
};

class video : public hoy{
    int videoLength;
    public:
        video(string tittle, float ratings, int videoLength)
        :   hoy(tittle, ratings)
        {
            this -> videoLength = videoLength;
        }

        void display(void){
            cout<<"Tittle is : "<<tittle<<endl;
            cout<<"Rating out of 5 is : "<<ratings<<endl;
            cout<<"video length is : "<<videoLength<<endl;
        };
};

class test : public hoy{
    int word;
    public:
        test(string tittle, float ratings, int word)
        :   hoy(tittle, ratings)
        {
            this -> word = word;
        }

        void display(void){
            cout<<"Tittle is : "<<tittle<<endl;
            cout<<"Rating out of 5 is : "<<ratings<<endl;
            cout<<"Article words is : "<<word<<endl;
        };
};

int main()
{
    /*
    Okay ei program e amra beshi kichu korbo na. Just er ager program gulate je virtual fucntion, polymorphism je dekhchilam
    tar e nice and easy example dekhbo. ei je ekhane je example ta dibo eita just bujhar jonno je virtal function er ki dorkar
    keno amra ta use kori ar use na korle code e ki problem hobe, setai janboo..

    accha nicher je program ta lekhchi oita just ekta example of virtual funciton how its works and what will the erors
    if we dont use virtual functions;;

    here also i leared a new things that you make a array of pointer;
        int *ptr[2];

    rules of virtual class;
        1. they can not be static
        2. they are accessed by object pointer.
        3. A virtual function can be a friend of another class 
        4. A function is base class might not be used
        5. If a virtual function is defiened in a base class, there is no needs of redifining it in the derieved class
    */
    string tittle = "C++ tutorial";
    float ratings = 4.5;
    int words = 52927;

    hoy *ptr;
    test object(tittle, ratings, words);
    ptr = &object;
    ptr->display();
    return 0;
}