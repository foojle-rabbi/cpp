#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    //constructor
    heap(){
        size = 0;
        arr[0] = -1;
    }

    //insertion function
    /*
    Amra jani je insert korar jonno 2 ta step follow kora lage.
    step 1. insert the value to the last postion of the array.
    step 2. take it to its correct position. correct postion mane jekhane ei value parent theke choto hobe. as its a max heap. 

    */
    /*
    Accha upore toh ekta overview dilam e je amra kivabe insertion korbo. but tarporeo eikhane arektu indetails e eitare bujhar chesta kori je ashole
    max heap moddhe insertion kivabe hoy. toh as we know that heap make korar jonno we use array ar insertion korar jonno o amra koyekta step follow korbo. 
    ar hae arekta kotha amra insertion always left side theke kori jeta array er dike last e index hoy. toh jeta bolte chilam amra 2 ta step follow koir

    step 1: array er last index e insert kori.
    step 2: oi last index e jei value insert korchi tar sathe amra tar parent node er value compare kori jodi parent node theke inserted value boro hoy
    taile amra swap kori swap(arr[parent], arr[index]); tarpor parent node er index re index = parent; kori jate uporer value gular sathe o jeno comapre kore
    property sasifty korte pari. ar jodi parent's node theke value choto hoy taile kichu kora lagbo na. 

    just simply return;
    */
    void insert(int val){
        // step 1
        size++;
        arr[size] = val;

        int index = size;
        //step 2
        while(index > 1){
            int parent = index / 2;
            if(arr[index] > arr[parent]){
                swap(arr[index], arr[parent]);
                index = parent;
            }else{
                return ;
            }
        }
    }

    //print function
    void print(){
        cout << "Elemtns of heap: ";
        for(int i = 1; i <= size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    //delation in heap
    /*
    Insertion toh amra dekhlam e je kivabe insertion korte hoy ar koto ta step follow korte hoy. toh ekhon amra dekhbo je kivabe delation korte hoy
    deltetion er kotha mathay ashlei mone korba je amra root node er value delete korbo. toh tar jonno 3 ta step follow korte hobe:
    step 1: replace the root node val with the last index of the array;
    step 2: delte that last index value; by only decreasing the size--;
    step 3: now place that last index(which is now the root node of the heap) value in its correct postion.
    */
    void deletion(){
        if(size == 0){
            return;
        }

        arr[1] = arr[size];
        size--;

        //first root node er index ber koro orthat jei node ta shobar last e chilo
        int index = 1;
        
        //eibar ekta loop size kom porjonto chalo
        while(index < size){
            //jehetu left ar right index orthat child er value er sathe value compare korba tai aage index gula ber kore neo. 
            int leftIndex = 2 * index;
            int rightIndex = (2 * index) + 1;


            //jehetu amra jene eshechi je vai insertion always left side theke hoy tai aage left child er value er sathe compare koro jodi left er value er theke choto hoy then wap
            if(index < size && arr[leftIndex] > arr[index]){
                swap(arr[index], arr[leftIndex]);
                index = leftIndex;
                //ar hae swap korar sathe sathe index change korba karon index toh ekhon left e choila geche

            // thik temoni vabe right index er vlaue er satheo compare koro. but age deikha neo je index array er size er beshi ni abar choila jay. 
            }else if(index < size && arr[rightIndex] > arr[index]){
                swap(arr[index], arr[rightIndex]);
                index = leftIndex;
            }else{
                //uporer kono condition jodi true na hoy er mane amar shob right position e o ache. tai return koro. 
                return;
            }
        }
    }
};

int main()
{
    heap h;
    h.insert(42);
    h.insert(36);
    h.insert(20);
    h.insert(30);
    h.insert(55);

    h.print();

    h.deletion();
    h.print();
    return 0;
}