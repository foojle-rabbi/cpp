#include<iostream>
using namespace std;

// class vector{
//     public:
//         int size;
//         int *arr;

//         vector(int size){
//             this -> size = size;
//             arr = new int[size];
//         }

//         int dotProduct(vector &v){
//             int d = 0;
//             for (int i = 0; i < size; i++)
//             {
//                 d += arr[i] * v.arr[i];
//             }
            
//             return d;
//         }
// };

template <class t>
class vector{
    public:
        int size;
        t *arr;

        vector(int size){
            this -> size = size;
            arr = new t[size];
        }

        t dotProduct(vector &v){
            t d = 0;
            for (int i = 0; i < size; i++)
            {
                d += arr[i] * v.arr[i];
            }
            
            return d;
        }
};


int main()
{
    /*
    ei tate temon behsi kichu dekhbo na. just khali template je kivabe use hoy. ba tar just ekta code example dekhbo..
    ei je prothome jei class ta dekhtachos na eita int nia jehetu banaichi. tai etar moddhe kebol intiger data type nia ye
    kaj korte hoibo. jodi flaot nia kaj korte jai tahole amre arekta class float er name banaite hoibo.. toh oi jhamela
    durr korar jonnoi ache template;

    tempalte use korle ar alada alada class make kora lage na. ekta class er moddhei alada alada variable type nia kaaj kora
    jay;
    */
    //Must learn how to calculate dotproduct

    // vector v1(3);
    // v1.arr[0] = 1;
    // v1.arr[1] = 5;
    // v1.arr[2] = 3;

    // vector v2(3);
    // v2.arr[0] = 0;
    // v2.arr[1] = 1;
    // v2.arr[2] = 2;

    // int a = v2.dotProduct(v1);
    // cout<<a<<endl;

    vector <float> v1(3);
    v1.arr[0] = 1.3;
    v1.arr[1] = 0.9;
    v1.arr[2] = 3.4;

    vector <float> v2(3);
    v2.arr[0] = 0.5;
    v2.arr[1] = 1.1;
    v2.arr[2] = 1.3;

    float a = v2.dotProduct(v1); //i think we cant use template in main function; ???
    cout<<a<<endl;

    //ekhon chaile same class re onno variable er jonno o use kra jabe;
    // vector <int> v1(3);
    // v1.arr[0] = 1.3;
    // v1.arr[1] = 0.9;
    // v1.arr[2] = 3.4;

    // vector <int> v2(3);
    // v2.arr[0] = 0.5;
    // v2.arr[1] = 1.1;
    // v2.arr[2] = 1.3;

    // float a = v2.dotProduct(v1); //i think we cant use template in main function; ???
    // cout<<a<<endl;
    return 0;
}