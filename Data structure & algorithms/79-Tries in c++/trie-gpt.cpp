#include<iostream>
#include<string>
using namespace std;

class trieNode{
    public:
    bool endWord;
    trieNode* arr[26];

    //constructor
    trieNode(){
        for(int i = 0; i < 26; i++){
            arr[i] = nullptr;
        }
        endWord = false;
    }
};

class tries{
    private:
    trieNode* root;

    public:
    //constructor
    tries(){
        root = new trieNode();
    }

    //insert fucntion
    void insert(const string& word){
        trieNode* current = root;
        for(auto c: word){
            int index = c - 'a';

            if(current->arr[index] == nullptr){ //it menas not present
                trieNode* newNode = new trieNode;
                current->arr[index] = newNode;
            }
                //it means letter is present. so move it to the next pointer/node;
                current = current->arr[index];
            // current->endWord = true; //mone hoy ami loop er vitore rekhe dichi deikha kaj kore na.
        }
        current->endWord = true;
    }

    // searching function
    bool search(const string& word){
        trieNode* current = root;

        for(char c : word){
            int index = c - 'a';

            if(current->arr[index] == nullptr){
                return false;
            }
            
            current = current->arr[index];
        }

        // // return current->endWord; //eita jodi use kori 
        // // return (current != nullptr && current->endWord); //eita jodi use kori 
        // return (current != nullptr && current->endWord);
        return (current->endWord == true);
    }

    /*
    Tries er ar ekta last function ache seta holo deltetion function. tobe babbar mia ja dekhailo tar moddhe 2 ta deletion function hoy .
    ekta'r niyom hocche searching function er thorugh. orthat search korar por just last e endofword = false; kore deo. tobe ekkhetre storage
    waste hoy. toh shejonno amar arekta function create korte hobe for deletion also. 
    */
};

int main()
{
    tries t;
    string str = "apple";
    t.insert(str);
    t.insert("myname");

    if(t.search("myname")){
        cout << "Word is found \n";
    }else{
        cout << "Word is not found \n";
    }
    //dont know what the fuck is happend to this code. why this things is not working as i coded just like that. 
    return 0;
}

/*
Bujhlam na vai etto kichu try korar por o keno ei ghorar dimer trie kaj kore na?
*/


/*
OOh vai finally i have found the prbolem. prolem ta chilo ei je ami insertiona ar delation korar shomoy protibar e if else statement use 
kortechilam. but oikhane amar if er need thakleo else er kono need chilo na. toh ekhon jokhon else statement remove korchi then my code is
working pretty fine. 
*/