#include<iostream>
using namespace std;

class student{
    int studentID;
    string name;
    public:
        void setData(int studentID, string name){
            this -> studentID = studentID;
            this -> name = name;
        }

        void getData(void){
            cout<<"Student id: "<<studentID<<endl; 
            cout<<"Student Name: "<<name<<endl<<endl; 
        }
};

int main()
{
    /*
        okay then, aj amra dkehbo array of object; using pointeer
    */

    //nicher ta hoiteche normal way te;
    student stu[3];
    stu[0].setData(1001, "fojle");
    stu[1].setData(1002, "Rifat");
    stu[2].setData(1003, "Sazzad");

    stu[0].getData();
    stu[1].getData();
    stu[2].getData();

    student s[2];
    student *ptrTemp = &s[0]; //ami jodi pointer dia access korte chai tahole each time ami kebol 1 ta object re point korte parmu
    ptrTemp = &s[1]; //orthat protibaar object er address boshaiya. kintu er thekeo sohoj keta way ache pointer dia access korar
    //jekhane ekta pointer dia baki shob gualre access kora jay.. 

    //the pointer (dynamically) type:
    student *ptr = new student[3]; //ei je dynamicaaly object er ekta array create hooiya geloo;
    // *(ptr).setData(1111, "Try"); //i dont why its not working. it shouldn't show any error!

    ptrTemp = ptr; //ekhane ptr tare temp ptr er moddhre rekhe dicchi jate kore pore Get data korte pari...

    int id;
    string name;
    //loops for setting datas
    for(int i = 0; i < 3; i ++){
        cout<<"Enter studntID and name of studnt number : "<<i + 1<<endl;
        cin>>id>>name;

        ptr->setData(id, name);
        ptr++; //ptr re ek blok age pahaiya dilam zate kore eita er porer object re point kore.
    }

    //loops of getting data
    for (int i = 0; i < 3; i++)
    {
        ptrTemp->getData();
        ptrTemp++;
    }
    
    return 0;
}