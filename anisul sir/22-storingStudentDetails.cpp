#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string line;
    int age;

    ofstream details;
    details.open("22-details.txt", ios::out | ios:: app);
    
    for(int i = 0; i < 5; i++){
        cout<<"Student name: ";
        getline(cin, line);
        details<<line<<"\t\t\t";

        cout<<"Enter age: ";
        cin>>age;
        details<<age<<endl;
        cin.ignore();
    }
    details.close();
    return 0;
}