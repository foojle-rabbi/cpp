#include<iostream>
using namespace std;

//accha deletion er toh 2 method ache ekta hocche shudhu delete kora ar arekta hocche gia memory theke o delte kora. toh ami aptoto easy tai kori
class trieNode{
    public:
    bool endOfWord;
    trieNode* arr[26];

    //constructor
    trieNode(){
        endOfWord = false;
        for(int i = 0; i < 26; i++){
            arr[i] = nullptr;
        }
    }
};

void insert(trieNode* root, const string& word){
    trieNode* current = root;

    for(auto c: word){
        int index = c - 'a';
        if(current->arr[index] == nullptr){
            current->arr[index] = new trieNode();
        }

        current = current->arr[index];
    }
    current->endOfWord = true;
}

bool search(trieNode* root,const string& word){
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

void deletetion(trieNode* root, string word){
    trieNode* current = root;

    for(auto c : word){
        int index = c - 'a';
        if(current->arr[index] == nullptr){
            return;
        }

        current = current->arr[index];
    }

    if(current->endOfWord == true){
        current->endOfWord = false;
    }
}

int main()
{
    /*
    Jani na reh vai eita kemne kore? keno jani ekhon khub e hard lagteche. jak eitare pore solve kortechi. inshaa-allah. 
    */
    //chaile toh alada ekta class create kora abar separate function eo kora jay.
    trieNode* root = new trieNode;
    insert(root, "myname");
    insert(root, "mango");
    insert(root, "apple");
    insert(root, "applied");
    insert(root, "apps");

    for(int i = 0; i < 5; i++){
        string s;
        cout << "Enter the word to find: ";
        cin >> s;

        if(search(root, s))
            cout << s << " is found" << endl;
        else
            cout << s << " is not found" << endl;

        cout << "Enter the word you want to delete: ";
        cin >> s;
        deletetion(root, s);
    }
    return 0;
}