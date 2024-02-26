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
        top1 = -1;
        top2 = (size / 2) - 1;
    }
    
    //first stack section:---------------
    bool isEmptyFist(){
        return top1 == -1;
    }

     bool isFullFirst(){
        return top1 == size / 2 - 1;
    }

    void pushFirst(int n){
        if(isFullFirst()){
            cout << "can not push: " << n << endl << "First stack is full" << endl;
            return;
        }
        top1++;
        arr[top1] = n;
    }

    int topFirst(void){
        if(top1 == -1){
            cout << "First stack is empty" << endl;
            return -1;
        }
        return arr[top1];
    }

    void popFirst(void){
        if(top1 == -1){
            return;
        }
        top1--;
    }

    //second stack section:----------------
    bool isEmptySecond(void){
        return top2 == (size / 2) -1;
    }

    bool isFullSecond(){
        return top2 == size - 1;
    }

    void pushSecond(int n){
        if(isFullSecond()){
            cout << "Second stack is full" << endl;
            cout << "Can not push " << n << endl;
            return;
        }

        top2++;
        arr[top2] = n;
    }

    int topSecond(void){
        if(isEmptySecond()){
            cout << "Second stack is empty" << endl;
            return -1;
        }
        return arr[top2];
    }

    void popSecond(void){
        if(isEmptySecond()){
            return;
        }
        top2--;
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
    stack s(4);
    s.pushFirst(1);
    s.pushFirst(2);
    s.pushFirst(3);
    s.pushFirst(4);
    s.pushFirst(5);

    cout << "Top value is: " << s.topFirst() << endl;
    s.popFirst();

    cout << "Top value is: " << s.topFirst() << endl;
    s.popFirst();

    cout << "Top value is: " << s.topFirst() << endl;
    s.popFirst();

    s.pushSecond(4);
    s.pushSecond(5);
    s.pushSecond(6);
    s.pushSecond(7);
    
    s.popSecond();
    cout << "second top value is: " << s.topSecond() << endl;
    return 0;
}

/*
Oh khoda ei ekta problem loiya je ei koyekdin ki shuru korchilam. jodio ekadharche problem ta nia think kori nai ba kora hoy nai. but tarporeo jodi chatgpt er
help nitam tahole aro easily problem ta solve hoiya jaito. kintu nah ami chaichi nije nije solve korar and see i solved it by my own. but there is a problem and
that is this, problem is not the optimal solution is the n/2 approach. And i wanted to try this solution. and solved this.

and now i will code the best approch to solve this 2 stack using single array. without n/2;
*/