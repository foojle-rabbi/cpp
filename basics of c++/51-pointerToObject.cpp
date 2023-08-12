#include<iostream>
using namespace std;

class student{
    int roll;
    string name;
    public: 
        void set_data(int roll, string name){
            this -> roll = roll;            
            this -> name = name;            
        }

        void get_data(void){
            cout<<"Name : "<<name<<endl;
            cout<<"Roll : "<<roll<<endl;
        }
};
int main()
{
    /*
    pointer to object mane hoitache class er object re pointer dia "larachara" deooya; haaaa haa haaa; ki koitachi nkai? temon
    kichu na. pura program monojoog dia / valo kore dekh bujhe jabi..
    */

    // acchar uporer je class ta create korchi oita ekta normal class oita nia kono kahini ba bujhar kichu nai; tobe niche ja
    //kichu lekhmu dkehamu ta ektu valo kore dekhis kemon?

    // accha eta toh nomal vabe kono object re access kora;
    student stu;
    stu.set_data(1152, "Fojle");
    stu.get_data();

    // student *ptr = &stu;
    // ptr.get_data(); //it show error
    // *(ptr).get_data(); //bujhalam na eta te eroor throw korteche ke.? etate toh emon hoyar kotha na!!

    // acche upore ta te ki jani hoiche pore thik korte hobe
    student *ptr = new student; // accha ei line er mane hoiteche ami alada object create na koira ekta pointer dia object
                                //er address dhoraiya deoya.. mane tar jonno amr ar alda object create kora laglo na. 
                                // abar & dia assign kora laglo na
    ptr->set_data(1151, "Isman");
    ptr->get_data(); //ar tui toh janoch e "->" ei tar mane ki? eitare koy selection/arrow operatior..

    //eibar hoiteche array of object; 
    student *p = new student[3]; /*eitar mane hoiteche ami student er 3 ta object create korlam (dynamically) ar tarpor 
    Oi object of array er prothom jei object ta ahce tar address dhoraiya dilam "p" re. dia koilam ne vai ami tore prothom
    address dia dichi tui eibar eitare dhoira dhoira baki gulare access kor..
    
    ar eitar bistarito er porer program e janboo..
    */

    return 0;
}