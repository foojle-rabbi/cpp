#include<iostream>
using namespace std;

/*
Cycle detect in a unordered map. ashole eita oirokom hard kichu na. Karon eitaO amader bfs ar dfs traversal er motoi easy. mane
algo pray same. just eikhane 1 ta jinish extra check kora lage ar sheta hocche parents er track rakha lage. ekkebare jei ekta 
condition dia cycle ache naki nai ta bujha jay sheta hocche. 
        jodi amar kono ekta node visited hoy but oita amar current node er parent na hoy taholei cycle present. 
ami jodi condition nije theke lekhi tahole
    if(visited[i] == true && parent[i] != front){
        return cycle present;
    }

    Fojle beshi kichu na. just first e ekta cycle oyala grpah aak. then bfs traversal kor mane dry run kor. dekhbi oikhane ekta 
    node er kache 2 3 ta path thake jaouar jonno. toh oikhane jodi kono ekta node already visited (karon oita parent node) 
    hoy taile jaito na. but cycle oyala grpah e visited grpah e jaite chibo but oitkhane dekhbi oita parents na. tar manei amar
    oikhane cycle present ache. concept khali parents node er e. 

*/

int main()
{
    /*
    Ajke hocche 5th july 24. raat 11:27 PM. boshchilam coding korbo. but jehetu shara din bokbok okra pore tution 
    kora chole tai raite beshikkhon shojag thakte pari na. khali ghum ashe. ekhono amar onek ghum paiteche. tai ekhon 
    ar shojag n thaika ghumaite gelam. eita abar kalke dhorbo ne. ki bolo? 

    Dekh fojle eirokom koira ghumaiya ghumaiya e toh life tare ekkebare beshi hard koira laitechis. kenona ekhon e toh tor
    koshto korar shomoy. ar ekhon jodi thik moto hard work na koroch taile baki life e toke koshto korte hobe. ar je je jinish
    gular tui dream dekhoch sheigula dream e hoiya thakbo. oigula ar true hobe nare. fojle tai ektu koshto koira hoileo ghum
    tare ektu kom koira daily atleast 1 hour time dich nijer skill develop korar. 
    */
    return 0;
}