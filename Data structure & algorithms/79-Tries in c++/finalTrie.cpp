#include<iostream>
using namespace std;

struct trieNode{
    trieNode* arr[26];
    bool endOfWord;

    //node re call korlei jeno amar constructor call hoy
    trieNode(){
        endOfWord = false;

        for(int i = 0; i < 26; i++){
            arr[i] = nullptr;
        }
    }
};

struct tries
{
    private: 
    //first e trees er je main root node oitare declare koro. jodio tumi chaile class charao tries implement krte paro. but ekhon ami apatoto 
    trieNode* root;

    public:
    //constructor
    tries(){
        root = new trieNode(); //root re eivabe dynamically e allocate korte hobe na hoy error throw korbe. 
    }

    //insertion function
    void insert(string word){
        //puro ta tree traverse korar jonno current node declare koro so that root node lost na hoy
        trieNode* current = root;
        
        for(auto c: word){
            int index = c - 'a';

            //eibar check koro je word er first letter present kina?
            if(current->arr[index] == nullptr){
                //it means letter is not presetn. so first create then point
                trieNode* newNode = new trieNode();
                current->arr[index] = newNode;
            }

            //ekhon current ke next node e point koro
            current = current->arr[index];
        }
        //last e endof word ke true kore deo
        current->endOfWord = true;
    }

    bool search(string word){
        trieNode* current = root;

        for(auto c : word){
            int index = c - 'a';

            if(current->arr[index] == nullptr){
                return false;
            }

            current = current->arr[index];
        }

        return current->endOfWord;
    }
};


int main()
{
    /*
    Jaak ekhon aisha finally bolte parbo je vai ami tries bujhte parchi(implementation);
    */
    tries t;
    int n;
    string s;

    cout << "Enter the number: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "enter the word: ";
        cin >> s;
        t.insert(s);
    }

    for(int i = 0; i < n; i++){
        cout << "Enter the word you want to search: ";
        cin >> s;

        if(t.search(s)){
            cout << s << " is found\n";
        }else
            cout << s << " is not found\n";
    }
    return 0;
}

/*
OOh God finally found the error after 2 hours 😑😴. 
*/