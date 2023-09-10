#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    /*
    Shob cheye beshi use kora stl hocche vector; karon vector er kichu benefits ache jemon: eita dyanmic array; mane eita create korar 
    shomoy kono size bole dite hoy na; ar pore jodi amar onek beshi space dorkar hoy tokhon oita automatic arekta vector create korbe and
    ager vector delete kore dibe; 

    jemon ami jodi normally ekta vector create kori taile initially eitar size/capacity hobe 0. jodi ami element inset kori tokhon eita 
    2x e barbe; mane ami jotokkhon element insert korte thakmu totokkhon e eitar size ba capacity increase hobe; tobe tar aage ekta jinsh 
    jana dorkar je size mane hoiteche amar vector e koto ta element ache; ar capacity mane amar vector koto ta element store korte parbe;

    niche code er sathe aro explanation deoya ache. dekhlei bujhte parbe;
    */

    vector<int> v;
    //vector main 3 ta function hocche: 1. push_back() 2. pop_back() 3. top();
    v.push_back(2);
    v.push_back(5);
    v.push_back(-26);
    v.push_back(63);
    v.emplace_back(58);
    v.emplace_back(52);

    v.pop_back();
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.empty()<<endl;
    
    // v.erase(v.begin(), v.end()); //it will erase the whole vector;

    //vector print korar onek way ache tar moddhe ekta holo iterator dia; ekta holo for loop dia array er moto ar arekta holo new style e;
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
        //wait arekta operator ache "at"
        // cout<<v.at(3)<<endl;
    }cout<<endl;

    //2nd way
    vector<int> :: iterator it;
    for(it = v.begin(); it <v.end(); it++){
        cout<<*(it)<<" ";
    }cout<<endl;

    //3rd way
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
    //shutorang tumi chaile er moddhe je kono ekta use kore vecotor traverse korte parbe


    /*
    lets talk about iterator; iterator hocche ekta pointer er moto mane eita kono ekta value er address store korbe; just like a pointer
    and jehetu vector er moddhe element contigous way te store hoy tai tumi chaile iterator use kore pointer er moto baki kaaj gula korte 
    parbe;
    */

    //amra stl er kichu algorithms use kore khub easily e kono vecotr ke sort korte pari;
    sort(v.begin(), v.end());
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;


    vector<int> vec1(5, 100); //eitar mane hocche ami 5 size er ekta vecotr nicchi jar moddhe protitar value 100 kore;
    cout<<vec1.size()<<endl;
    vec1.push_back(52);
    cout<<vec1.size()<<endl;
    
    vec1.insert(vec1.begin(), 500); //mane hocche ami vecotr er moddhe first e 500 insert korlam;
    vec1.insert(vec1.end()-1, -500); //mane holo ami vector er last er 1 ghor age -500 insert korlam;

    vec1.insert(vec1.begin() + 1, 5, 23); //eitar mane holo ami begin er ek ghor pore 5 ta 23 insert korlam;
    // vec1.clear(); it will clear the whole vector;


    for(auto i:vec1){
        cout<<i<<" ";
    }cout<<endl;
    
    vector<int> vec2(vec1); //it will copy the whole vec1 vecotor to vec2;

    vec2.pop_back();

    for(auto i:vec2){
        cout<<i<<" ";
    }cout<<endl;

    int ans = vec2.back(); //what the problem in here? i have to find out; i mean ask chatgpt
    cout<<ans<<endl; //aha ami etokkhone ena bujhte parchi ashol kahini; eita toh ar stack or queue na tai eikhane kebol push back
    //pop_back() ar back(); function work kor;


    //Haa ha ei hoilo vector er post moterm; tarporero ekta kotha ki kono kichui permament na so, shikhba bhubla ei kahini; kintu tarporeo
    // jodi aro kono kichu janar thake tahole vist:  cpppreference.com or __cplusplus.com; 
    return 0;
}