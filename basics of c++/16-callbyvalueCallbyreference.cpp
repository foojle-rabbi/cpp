#include<iostream>
using namespace std;

//call by value
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

//call by reference
void swapReference(int* a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//cal by reference using c++ reference variable
void swapBycppMasala(int &a, int &b){   //referece variable "&" 
    int temp = a;
    a = b; 
    b = temp;
}

//return reference value
int& swaap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

    return a;
}
int main()
{
    int x = 6;
    int y = 9;

    cout<<"The value of x and y before calling swap function: "<<x<<" "<<y<<endl;
    swap(x, y); //Call by value
    cout<<"The value of x and y after calling swap function: "<<x<<" "<<y<<endl;


    swapReference(&x, &y); //we are sending the address of x and y
    cout<<"The value of x and y after calling swapReference function: "<<x<<" "<<y<<endl;

    swapBycppMasala(x, y); //this this a special feature of c++ where you only pass the value from here but in 
                           //funcion it will address the values so it will also swap the vlaues in the main function
    cout<<"The value of x and y after calling swapbyreferecne function: "<<x<<" "<<y<<endl;
    return 0;
}