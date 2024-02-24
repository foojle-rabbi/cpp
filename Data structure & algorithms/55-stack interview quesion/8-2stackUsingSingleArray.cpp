#include<iostream>
using namespace std;

class stack{
    private:
    int *arr;
    int top1;
    int top2;
    int size;

    public:
    // constructor
    stack(int n){
        size = n;
        arr = new int[size];
        int top1 = -1;
        int top2 = (size / 2) - 1;
    }

    bool isEmptyFist(){
        return top1 == -1;
    }

    bool isEmptySecond(void){
        return top2 = (size / 2) -1;
    }

    bool isFullFirst(){
        return top1 == size / 2;
    }

    bool isFullSecond(){
        return top2 == size - 1;
    }

    void pushFirst(int n){
        if(isFullFirst()){
            cout << "First stack is full" << endl;
            return;
        }
        top1++;
        arr[top1];
    }

    void pushSecond(int n){
        if(isFullSecond()){
            cout << "Second stack is full" << endl;
            return;
        }

        top2++;
        arr[top2];
    }

    // void display(void){
    //     if(isEmptyFist() && isEmptySecond()){
    //         cout << "Both stacks are empty" << endl;
    //         return;
    //     }
    //     if(isEmptyFist()){
    //         cout << "First stack is empty" << endl;
    //         cout << "Eleements of second stack: ";
    //         for(int i = top2; i <= size -1; i++){
    //             cout << arr[i] << " ";
    //         }cout << endl;
    //         return;
    //     }

    //      if(isEmptySecond()){
    //         cout << "Eleements of first stack: ";
    //         for(int i = top1; i <= size / 2 -1; i++){
    //             cout << arr[i] << " ";
    //         }cout << endl;
    //         cout << "Second stack is empty" << endl;
    //         return;
    //     }
    //     cout << "Eleements of first stack: ";
    //         for(int i = top1; i <= size / 2 -1; i++){
    //             cout << arr[i] << " ";
    //         }
    //     cout << endl;

    //     cout << "Eleements of second stack: ";
    //         for(int i = top2; i <= size -1; i++){
    //             cout << arr[i] << " ";
    //         }
    //     cout << endl;
    // }
};

int main()
{
    stack s(6);
    s.pushFirst(1);
    s.pushFirst(2);
    s.pushFirst(3);
    s.pushFirst(4);
    return 0;
}