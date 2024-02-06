#include<iostream>
using namespace std;
#define MAX_SIZE 10

class stack{
    private:
    int arr[MAX_SIZE];
    int top;

    public:
    //constructor
    stack(){
        top = -1;
    }

    void push(int val){
        if(top == MAX_SIZE){
            cout << "Stack overflow" << endl;
            return;
        }
        // top++;
        arr[++top] = val;
    }

    void pop(void){
        if(top == -1)
            return;
        else
            top--;
    }

    int peek(void){
        if(top == -1){
            return -1;
        }else{
            return arr[top--];
        }
    }

    int size(void){
        return top + 1;
    }

    bool empty(void){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }

    void print(void){
        cout << "Elements of stack: ";
        for(int i = 0; i <= top; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    /*
        operations:
        1. push
        2. pop
        3. size
        4. peek
        5. empty
        6. top
    */
    stack s;
    s.print();
    s.push(5);
    s.push(7);
    s.push(23);
    s.print();

    s.pop();
    s.print();

    cout << "Peek item: " << s.peek() << endl;
    cout << "size of stack: " << s.size() << endl;
    return 0;
}