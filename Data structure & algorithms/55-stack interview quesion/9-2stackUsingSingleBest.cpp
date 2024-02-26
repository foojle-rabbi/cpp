#include<iostream>
using namespace std;

class TwoStack{
private:
    int *arr;
    int size;
    int top1;
    int top2;
public:
    TwoStack(int n){
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }

    int capacity(void){
        return top1 < top2 -1;
    }

    void push1(int n){
        if(!capacity()){
            cout << "Stack is full" << endl;
            return;
        }
        top1++;
        arr[top1] = n;
    }

    int pop1(void){
        if(top1 == -1){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top1--];
    }

    void push2(int n){
        if(!capacity()){
            cout << "Stack is full" << endl;
            return;
        }
        top2--;
        arr[top2] = n;
    }

    int pop2(void){
        if(top2 == size){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top2++];
    }
};

int main()
{
    /*
    Accha er aage jei problem ta solve korchilam oita optimal solution chilo na. kintu ekhon iccha che optimal solution ta korar jekhane
    puro ta array er space er shothik uses kora hobe. kono waste jabe na. Okay then lets solve this problem then the nth stack and then the 
    nth queue. 
    */

    TwoStack stack(4);
    stack.push1(5);
    stack.push1(10);
    stack.push1(15);
    stack.push1(20);
    stack.push1(25);

    stack.push2(734);
    cout << stack.pop1() << endl;
    cout << stack.pop2() << endl;
    stack.push2(734);
    return 0;
}
