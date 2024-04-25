#include<iostream>
using namespace std;

int main()
{
    /*
    Kth smallest element in an arry: orthat input hisabe ekta array deoya thakbe amader ke oi array er moddhe kth smallest element return 
    korte hobe. jemon arr[] = {7, 10, 4, 3, 20, 15}; k = 4;
    so, our ans will be 7; as 7 is the 4th smllest in the arry;

    ans remeber that the array will be unsorted.

    so, how we will solve this problem. 
    approach #1: first there is a easy and simple approach which is first sort the array then just return arr[k -1]; thats it; the time complexity
    will be O(nlogn) of sorting the array. and space complexity will be O(1); as we did'nt use extra space; but amra chacchi na eita normal way te
    solve korar jehetu amra heap (max/min) shomporke jani tai amra chacchi eikhane heap er use kore solve korte;

    approach #2: 
    heap diyeo solve kora easy tar jonno kth smallest er jonno amra max heap use korbo.
    step 1: first we will insert the kth element to the max heap.
    step 2: then we will iterate the remaining part of the array and if heaps.top() < arr[i] orthat jodi amar heap er top theke array er value less then
    hoy tahole aage heap theke value() pop korbo then Oi value take insert korbo.


    and after iterating the rest array. there will be only the k number of smaller element in the heap. now just return the top() element of the heap. which
    is the ans.  
    */

    //------------------------------------------
    //ekhon apatoto laptop er screen valo na ar network e o problem diteche tai apatoto just algo gula dekhlam. problem ta solve kora hoilo na but I hope that
    // you will solve this problem on a online judge soon. 
    return 0;
}