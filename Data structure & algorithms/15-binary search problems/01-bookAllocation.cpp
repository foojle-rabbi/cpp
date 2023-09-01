#include<iostream>
using namespace std;

bool isPossible(int arr[], int mid, int n, int student){
    int pageSum = 0;
    int stuCount = 1;
    
    for(int i = 0; i < n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }else{
            stuCount++;
            if(stuCount > student || arr[i] > mid){
                return false;
            }else{
                pageSum = 0;
                pageSum += arr[i];
            }
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int student){
    int left = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int right = sum;
    int ans = -1;

    while(left < right){
        int mid = (left + right) / 2;
        if(isPossible(arr, mid, n, student)){
            ans = mid;
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    return ans;
}

int main()
{
    /*
    Book allocation problem; 
    basically eita code studio er ekta problem but unfortuantely ami keno jani code studio khuija pai nai; accha jaak pera nai
    chill; ekhon ashol problem e asi; ei problem tate tomare ekta array of page deoya thakbe; tomare 2 jon student er moddhe
    maximum of minimum number ber kore dite hobe; example dile bujhte easy hobe:

    suppose you have this array [10, 20, 30, 40]; and followings are the cases;
    case 1: 10 | 20 30 40 ; eikane maximu = 20 + 30 + 40 = 90;
    case 2: 10 20 | 30 40 ; eikane 10 + 20 = 30 and 30 + 40 = 70 so max = 70;
    case 3: 10 20 30 | 40 ;  first 10 + 20 + 30 = 60 and 40 so max = 60;

    now in those case maximums are 90, 70, 60; and among them minimum is 60; so your ans is 60;

    accha eita toh dekhlam code chara kivabe kore; kintu code e kivabe korbo? code e korar jonno binary search use korte hoibo
    left = 0; ar right = sum of total array; and then there will be 2 condition if there is possible solution; and for possible
    solution you have create another function; which will tell if the value if possible ans or not;

    ekhon possible solution ber korte hoibo; possible solution kemne ber korbe; jehetu eitar moddhe minimum page bar korte koiche
    tai first e left ar right er mid ber korte hobe; tar por dekhte hobe je first student re koto ta page deoya jay; tobe ha
    pageSum jodi mid er beshi hoiya jaay taile second student re allocate korte hoibe; ekhon second student re jodi allocate
    na kora jay mane oikahne o jodi pageSum er value mid er cheye beshi aisha pore taile student number 2 cross korbe; ar jehetu
    2 cross korte taile tader moddhe minumum page dia vag koira deoya jaibo na; ar jodi jaito taile mid ta amader possible 
    solution hoito;

    I think bujhaite parchi; baki ta code dekhle bujhte parbe; 
    */

    int arr[] = {5, 5, 5, 5};
    int student = 2, size = sizeof(arr) / sizeof(arr[0]);

    cout<<"Return valu is: "<<allocateBooks(arr, size, student)<<endl;
    return 0;
}