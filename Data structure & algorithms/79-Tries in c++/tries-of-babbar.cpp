#include<iostream>
#include<string>
using namespace std;

//orthat amar trie er each node er moddhe ki ki thakbe. amra toh jani e je, class er moddhe eki type er function or data type combined kroa hoy
class trieNode{
    public:
    char data; //ooh taile eita hocche amar oi node er data;
    trieNode* children[26]; //ar eigula hocche amar pointer
    bool isTerminator; //eta holo gia terminator mane eitar moddhe flag thakbe je eikhane ki kno word end hoiche kina

    //constructor
    trieNode(char ch){
        data = ch;
        for(int i = 0; i < 26; i++){
            children[i] = nullptr;
        }
        isTerminator = false;
        //ghum pacche tai bakita kal ke kori. 
    }
};

class trie{
    public:
    //prothomei amar ekta trie er moddhe root node thake
    trieNode* root;

    //insert korar jonno recrsive function
    void insertIt(trieNode* root, string word){
        //first base case
        if(word.length() == 0){ //jodi amr word shesh hoya jay. ba ami word er last e choila ashi taile terminator ke true mark koro
        root->isTerminator = true;
        }

        //now find the index
        int index = word[0] - 'A'; //eikhane capital letter er word dhoira nilam.
        trieNode* child;

        //eibar word jehetu shesh hoy nai. tai check koro je amar ei word ta ki ei node er moddhe present kina? 
        if(root->children[index] != nullptr){ //present
            child = root->children[index];
        }else
        { //absent
            child = new trieNode(word[index]);
            root->children[index] = child;
        }

        //recursion call
        insertIt(root, word.substr(1));
    }

    void insert(string word){
        //eikhane amra word gulare recursively insert korbo. keno korbo eita na jani. tobe shudhu eita mone rakhi je we will use recursion. 
        insertIt(root, word);
    }
};

/*
jaak etokkhone aisha koddura koddura bujhtechi re vai. prthome toh kichu e bujhote pari nai. jak bujhleo ekta kotha ki eita ettota 
easy kono data structue na. tobe joto tuku bujhlam ta holo gia je eita ekta tree er moto e tobe eitar ekektar moddhe 26 ta node thakble
ba bolte paro je 26 ta character er jonno ekta array thakbe. ekta node er moddhe 3 ta value thakle ekta hocche data ekta hocche array ar 
arekta hocche terminal node. 
*/

int main()
{
    
    return 0;
}