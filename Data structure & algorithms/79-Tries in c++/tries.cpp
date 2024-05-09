#include<iostream>
using namespace std;

class trieNode{
    public:
    char data;
    trieNode* arr[26];
    bool isTerminal;

    //constructor
    trieNode(char ch){
        data = ch;
        for(int i = 0; i < 26; i++){
            arr[i] = nullptr;
        }
        isTerminal = false;
        //ghum pacche tai bakita kal ke kori. 
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