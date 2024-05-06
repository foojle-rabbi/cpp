#include<iostream>
using namespace std;

int main()
{
    /*
    Hayre khoda ki komu kotha. ei lecture ta shei kobei shuru korchilam but ami babbar miar ta kichu e bujhte pari nai. shejonno valo kore focus
    o korte pari nai. ami hite jeivabe bolche ami aga matha kichu e bujhi nai. she jonno 2 3 bar mone hoy lecture ta dekhechi kintu tarporeo mathar moddhe
    kichu nite pari nai. pore she jonno shuru holo procastination. 

    pore vablam na eivabe toh shikha jaibo na tai abar notun kore onno arekta tutorial ba lecture dekhte hobe jate kore eitake valo vabe bujhte pari
    ar je korei hok na keno amake aage ei topic ta bujhte hobe. kono motei skip kora jabe na. tai 2 din age mone hoy koyekta lecture namaichilm but valo 
    kore dekha o hoy nai ar note o kora hoy nai. but oi lecture gula te abar khub valo korei explain korche. toh oikhan theke ja ja shikhte parlam ta e ami 
    eikhane tule dhorbo. 
    -------------------------------
    prothomei ashi what is hasing? 
    -> toh hashing ekta data structure. aro sohoj kore bolle bola jay je hasing hocche ekta technique jeitar maddhome insertion, delation, ar seaching khub e
    efficient way te kora jay O(1); orthat constant time lage matro. jeta kina khub khub valo. toh ei same technique tai amader database e use kora hoy jate kore
    khub tara tari log in kora jay. ta CRUD operations gula kora jay. 

    hasing kivabe kaj kore? 
    -> muloto hasing er 2 ta jinisher upor base kore kaj kore. tar moddhe ekta hocche key ar arekta hocche value.
    jemon eikhane ami jodi ekta example dei tahole hoyto bujhte aro easy hobe. dhoro tomar kache 1-100 porjono number ache. toh tumi ki korla tumi eigula re jar 
    number er moddhei tare store kore dila. tokhon amr jodi 25 need hoy tokhon ami dekhbo amar oi array te (ar hooo ekta kotha hoyto bola hoy nai. je amra hasing e 
    array use kori. karon amra jani hashing e index jana thakle marto O(1) time lage) oi index e value ache kina? jodi thake tahole reutn koro true na thakle false. 
    orthat etto easy. 

    but eitar o ekta draw back ache. kaon ami jodi onek boro number store korte jai tokhon kintu amar onek boro size er ekta array nite hobe. jodio rakhi matro 100 ta 
    number but amar array kintu thiki nite hobe oi maximum number er size er ekta array. 

    abar mone koro amar kono ekta key number/index na hoiya stirng hoilo orthtat ekta name hoilo. toh sehkkhetre ami array er index e kivabe value rakhbo? string er
    corrosponding ki ar index address kora jay? ashole jay na!
    toh shekhane aashe amader hasing function er!

    what is hasing function? 
    -> hasing function hocche ekta technique or logic jeitar moddhome amra boro number ke othoba string ke index e convert kori jate kore oitare amader array er 
    moddhe insert korte pari. karon arry er moddhe insert korte hole amar index dokar ar index only integer number hoy shejonno shob kichu ke jate index e convert 
    kora jay she jonno amader dorkar hoy a hasing function:

    is there any classification of hasing function? 
    -> hoo hasing function er onek classification ache. maybe 3 ta ache apatoto mone nai tai skip korlam tobe oigula just ekekta technique jar moddhe value pass korle
    amake index return korbe. 

    what is collision in hasing? 
    -> mone koro ami je ekta paramenter pass kormu oikhane amake jei index dite sheita onek shomoy ek hoiya jay mane same index 2 3 bar diya dey suppose amar number hocche 
    654 toh ami jodi eitake % kori 10 diye taile amar index asbe 4 toh ami 4 index e 654 ke insert korlam ekhon amar arekta number asholo 764. toh eitar o index ashbe 4 toh
    ekhon jehetu 4 index e already value ache tokhon ki korbo? ar eitakei bole collison.  toh oikahne e ki korbo? toh eikhanei ashe amader chaining concept;

    what is chaining? 
    -> chaining muloto linked list er moto kaj kore. eki index e multiple value rakhar jonno use kora hoy. chainng abar 2 types. open chaining closed chaining. closed chaining 
    abar 3 prokar. 

    what is load factor? 
    -> n / m; where n is the number of element. and m is the number of indexes/array size; ei load factor always 0.75 er niche rakhte hoy. rakha ta valo. 

    ----------------------- 
    ei chilo amader hasing niye kichu basic concept or behind the scene hashmap, set kivabe kaj kore tar ekta udahron. tobe eikhane pura puri concept 
    clear kora hoy nai. dorkar hoy chatgpt er kach theke baki ta jana jabe. 

    tobe eigula hocche concept clear korar jonno. jodio amra eigula implement khub kom e kori kenona amader c++ er moddhe ekta stl ache. 
    */
    return 0;
}