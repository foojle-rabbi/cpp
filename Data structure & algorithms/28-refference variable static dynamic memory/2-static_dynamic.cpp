#include<iostream>
using namespace std;

int main()
{
    /*static ar dynmaic haa: amra jokhon kono ekta program run kori tokhon oi program 2 types er memory nia ashe tar moddhe ekta hocche
    heap meory ar arekta hocche static memory. static meory er moddhe space thake kom ar heap memory er moddhe space ba jayga thake onke
    beshi. 

    ar amra jokhon normaly kono variable create kori maane jokhon lekhi: int a = 5; ba char ch = 'c'; or double point = 4.222; ect ei 
    shob gula variable e create hoiteche amder static meory te ar jokhon program shesh hoy tokhon ei memory gula o automatic free hoiya 
    jaay; toh amra taile heap meory use e kori na; ba korte chaile kivabe korte pari? 

    tar jonne ache amader new keyword; jeitar moaddhome heap memory te access paoya jay; ar tomar kon data typer lagbo oita mention kore
    dilei tomar heap e meory allocate kora hoye jabe; 

    ar ei jonno e static e jei meory allocate kora hoy tare static memory ar heap e jei memory allocate kora hoy tare dynamic memory
    alloction bola hoy; accha jai hook 

    jokhon e amra new int lekhi er mane amar heap memory te integer data typer ekta jayga allocate hoiya geche but eitar kono name nai 
    ekhon name na thakle use kormu kemne? eitar name na thakleo eita memory address reutrn kore. toh amra to jani memory adress store 
    korar main kaaj e hocche pointer er. tai amra static memory te ekta int type er pointer create korbo jei tare heap memory er int er
    adress store kora thakbe: tokhon amr syntax hobe: int *a = new int;
    */

    // int *age = new int;
    // *age = 12;
    // cout << *age << endl; 

    int *arr = new int[5];
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    cout << "elements of the array: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;

    /*
    Ekhon eikhane arekta kotha acche kotha ta hocche emon je. amra jokhon static e memory allocate kori tokhon oita program shesh hoyar
    por e sathe sathe shesh hoiya jay ga. but dynamic memory ba heap meomory er kkhetre emon ta hoy na. eitake mane oi allocate kora
    jayga ke amader nije theke free korte hoy. ar na hole memory leak hoiya jay. etc...
    */

    delete []arr; //eita hocche array deter korar syntax
    return 0;
}