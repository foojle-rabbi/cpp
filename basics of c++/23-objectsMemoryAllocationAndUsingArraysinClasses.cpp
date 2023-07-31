#include<iostream>
using namespace std;

class shop{
    int itemId[10];
    int itemPrice[10];
    int counter;

    public:
    void setPrice(void);
    void getPrice(void);
    void initCounter(void){
        counter = 0;
    }
};

void shop :: setPrice(void){
    cout<<"Enter the item Id: ";
    cin>>itemId[counter];

    cout<<"Enter item price: ";
    cin>>itemPrice[counter];

    counter++;
}

void shop :: getPrice(void){
    for(int i = 0; i < counter; i++){
        cout<<i + 1 <<"item id: "<<itemId[i]<<" item price: "<<itemPrice[i]<<endl;
    }
}

int main()
{
    shop dokan;
    dokan.initCounter();
    dokan.setPrice();
    dokan.setPrice();
    
    dokan.getPrice();

    return 0;
}

/*
    functions:
    initCounter
    setPrice
    getPrice
*/