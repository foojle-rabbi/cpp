#include<iostream>
using namespace std;

void heapify(int *arr, int size, int index){
    int highestVal = index;
    int leftIndex = 2 * index;
    int rightIndex = (2 * index) + 1;

    //check koro je amar left index bound er moddhe ache kina. ar eitar value ki higest val theke boro kina
    if(leftIndex < size && arr[leftIndex] > arr[index])
    {
        //jodi boro hoy tahole index change koro 
        highestVal = leftIndex;
    }
    //same vabe right child er value o check koro je boro kina
    else if(rightIndex < size && arr[rightIndex] > arr[index])
    {
        //jodi boro hoy taile index change koro
        highestVal = rightIndex;
    }

    //dekho je index change hoiche kina?
    if(highestVal != index)
    {   
        //jodi highest val er index change hoy taile eikhane enter korbe. ar enter korlei value gula swap koro. 
        swap(arr[index], arr[highestVal]);
        //ekhon uporer ei ekbar function chola dia ekta highest value re tar nijer jaygay nilam. ekhon pura tree te tar shothik
        //jaygate set korar jonno abar heapify function re call korte hoilo. 
        heapify(arr, size, highestVal);
    }
}

int main()
{
    /*
    First ei question aste pare je vai heapify ki?
    -> ekta array theke heap build korar way tai hocche amr heapify. which is an important topic. 

    -------------------
    heapify function build korar kkhetre koyekta property mathay rakhte hobe:
        1. leaf nodes gula always heap er property satisfy kore. 
        2. ar heapify function er kaj amra always last index theke shuru korbo.
        3. array te amar (n/2 + 1 theke ith) index porjonto shob gual nodes leaf node. ar amra toh jaina aschi je leaf nodes gula re process korte hoy na
        4. tahole amra process korbo (n/2 > 0) projonto shokol nodes gula re. 
    ---------------------
    etokkhon toh bollam kichu theory gula. eibar ami amar moto kore bole ja ei porjonto bujhte parchi.
        prtohomoto heapify holo ekta array theke max heap or min heap build korar ekta function. jeita amader delete nodes er por je right position e set kore
        oitar moto. orthat (n/2 > 0) er moddhe joto gula nodes ache tader shob gulare ekta ekta koira dhorbo ar dhoira dekhbo je eita ki tar nijer jay gay ache kina
        jodi thake taile toh thakloi ar jodi na thake tokhon eitare eitar right position e nia heap build kora hoibo. 

        insert korar complexity O(logn);
        build korar complexity O(n);
    */

    int arr[] = {-1, 23, 54, 12, 87, 45, 32};
    int size = 7;

    // size nia kechal lagte pare but kechaler kichu nai normal size e nibi. eitukui e taile ar - minus tinus kora lagbo na. ar ki
    
    //eikhane mone hoy ami arekta jinish mistake korechi ar sheta hocche gia amar. heapify te leaf nodes gula process korte hoy na. 
    //ar maybe ei karonei last index theke shuru kore. haa eitai karon. ar shejonno jate hobe (n/2 theke 0) porjonto 
    for(int i = size/2; i > 0; i--){
        heapify(arr, size, i);
    }

    /*
    Accha wait ekta jinish eikhane amra shob shomoy keno last index theke shuru korbo? first index theke hobe na kenO
    naki first index thekeo heapify function work kore. okay left check.
    */
    
    // for(int i = 1; i < size; i++){
    //     heapify(arr, size, i);
    // }

    cout << "Heap value: ";
    for(int i = 1; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}