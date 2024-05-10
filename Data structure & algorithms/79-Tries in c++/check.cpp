#include <iostream>
using namespace std;
const int ALPHABET_SIZE = 26; // Assuming lowercase alphabets only

struct TrieNode {
  TrieNode* children[ALPHABET_SIZE];
  bool isEndOfWord;

  TrieNode() {
    for (int i = 0; i < ALPHABET_SIZE; i++) {
      children[i] = nullptr;
    }
    isEndOfWord = false;
  }
};

class Trie {
 private:
  TrieNode* root;

 public:
  Trie() {
    root = new TrieNode();
  }

  // Function to insert a word into the Trie
  void insert(const std::string& word) {
    TrieNode* current = root;
    for (char c : word) {
      int index = c - 'a'; // Assuming lowercase alphabets
      if (current->children[index] == nullptr) {
        current->children[index] = new TrieNode();
      }
      current = current->children[index];
    }
    current->isEndOfWord = true;
  }

  // Function to search a word in the Trie
  bool search(const std::string& word) {
    TrieNode* current = root;
    for (char c : word) {
      int index = c - 'a';
      if (current->children[index] == nullptr) {
        return false;
      }
      current = current->children[index];
    }
    return current->isEndOfWord;
  }
};

int main() {
    Trie t;
    t.insert("apple");
    t.insert("mango");
    t.insert("apply");
    t.insert("application");
    t.insert("time");
    t.insert("timer");

    for(int i = 1; i < 6; i++){
        string s;
        cout << "Enter the word: ";
        cin >> s;

        if(t.search("apple")){
        std :: cout << "Word is found \n";
        }else{
            std :: cout << "Word is not found \n";
        }
    }
  return 0;
}

//dhatt eita toh arek gaza khorer code 
//vai the main problem is on the logic of if else statemnt. 
