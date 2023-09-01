#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int mid, int painter){
    int paintSum = 0;
    int painterCount = 1;

    for(int i = 0; i < n; i++){
        if(paintSum + arr[i] <= mid){
            paintSum += arr[i];
        }else{
            painterCount++;
            if(painterCount < painter || arr[i] > mid){
                return false;
            }else{
                paintSum = 0;
                paintSum += arr[i];
            }
        }
    }
    return true;
}

int painterPartition(int arr[], int n, int painter){
    int left = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int right = sum;
    int ans = -1;

    while(left < right){
        int mid = (left + right) / 2;
        if(isPossible(arr, n, mid, painter)){
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
    Painter partion; 
    i think there is no needs of any explanation; cause this problem is similar like the book allocation problem; in this 
    problem suppose you have this [5, 5, 5, 5] array; 

    hey i have a great idea for you; each you solve a problem or want to solve a problem, first try to understand the problem
    by writing on paper then think the answere of that problem and then do some dry run on the solution; if you dont have the
    solution not worry watch a tutorial or go discussion section but dont stop to do DRY RUN ; 

    --> explanation: Okay ei problem tao oitar moto mane book allocation er moto; je tomare kotla array deoya thakbo tumi oi
    gulare paint korba mane tumi toh ar paint korba na paint korbo tomar koyekjon painter ekhon tumi tader ke partition kre
    dia je ke koto ta array paint korbo; 

    Accha jai hook simply think koro; first binary search lagaiba; 0 theke total sum of array porjonto; tar por mid bahir korba
    ar dekhba mid ki possible solution kina? jodi possbile solution hoy taile ans er moddhe mid store kore rakhbe (ans = mid);
    ar jehetu mid possible sotuin ebong amader jehetu minimum ta bhir korte koiche tai amra ar aage jaibo na; na right part 
    puratare neclect kore dibo (right = mid - 1;) cause jehetu eita possible solution hoiche tai aager gulao possbile solution
    hoibo; accha ar jodi possible solution na hoy taile left ere mid + 1; korba; karon jehtu ei ta possible solution na tai 
    solution samne thakbo; accha ei gelo binary search er 2 ta condition;

    ekhon asho isPossible e; isPossible e tumi oi mid er value tare check koba je oita possibel kina; ta kemne check korba je
    possible solution kina? eitao easy; fist e 2 ta variable make korba ekta hocche painter er number count korar jonno ar 
    arekta hocche paintSum korar jonno; tarpor pura ta array traverse korba ar first paointer er jonno array er value gula 
    sum kore dekhba je eita ki mid er behsi hoiya jaiteche kina; jodi mid er beshi chila jay taile second painter er jonno 
    dekhba; kintu second painter er ene jaoyar aage painter er count number baraiba ar tarpor check korba je painter er number
    ki beshi hoiya gelo kina ar je array er value ache shei ta mid theke beshi? jodi 2 ta value e beshi hoiya jay taile 
    return false; ar jodi na hoy taile paintSum = 0; and then pageSum abar array[i] er value gula store korba; are ekkebare 
    shehe jodi ashe taile true return korba; karon jehetu shob gula condition maina aiche tar mane eitai possible solution; 

    I think bujhaite parchi; tarporo na bujhle code ache code dekho; baki ta emniteei buijha jaiba; 
    */

    int arr[] = {5, 5, 5, 5};
    int painter = 2, size = sizeof(arr) / sizeof(arr[0]);

    cout<<"Ans is: "<<painterPartition(arr, size, painter);
    return 0;
}