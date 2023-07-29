#include<iostream>
using namespace std;

int main()
{
    int marks[] = {23, 25, 22, 53}; //most of the things is like "c language"
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    marks[2] = 332;
    cout<<marks[2]<<endl;

    for(int i = 0; i < 4; i++){
        cout<<"The value of "<<i<<" marks is: "<<marks[i]<<endl;
    }

    //printing the marks value using other loops

    //connection between array and pointer //arrays first's address is like a pointer *a and a[] both are same i think
    int *p = marks;
    cout<<*(p)<<endl;
    cout<<*(p + 1)<<endl;
    cout<<*(p + 2)<<endl;
    cout<<*(p + 3)<<endl;
    return 0;
}