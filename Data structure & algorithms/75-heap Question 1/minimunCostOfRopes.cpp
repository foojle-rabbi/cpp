#include<iostream>
#include<queue>
using namespace std;

int MinimumCost(int *arr, int n){
    priority_queue<int, vector<int>, greater<int> > minHeap;
    for(int i = 0; i < n; i++){
        minHeap.push(arr[i]);
    }

    int cost = 0;
    while(minHeap.size() > 1){
        int a = minHeap.top();
        minHeap.pop();

        int b = minHeap.top();
        minHeap.pop();

        int sum = a + b;

        minHeap.push(sum);
        
        cost += sum;
    }
    return cost;
}

int main()
{
    /*
    input: {4, 3, 2, 6};

    2  3
    \ /
     5
    {4, 5, 6};

    4  5
    \ /
     9
    {9, 6};

    6  9
    \ /
     15
    {15};

    cost = 5 + 9 + 15;
         = 29;

    orthat amare ekta array deoya thakbe oikhan theke 2 ta sammler value nia sum koira abar array te rakhte hobe tarpor abar 2 ta smaller 
    value nia sum kore summation array te rakhte hobe. eita tokkhon porjonto korte hobo jotokkhon porjon array te 2 tar kom element thakbe. 
    ar amader ei sum gular summation e ans hisabe return korte hobe. 

    approach:
    step 1: first make a min heap and then push all the elemtn to it.
    step 2: the pop top 2 element of that heap and sum and push it to the heap. 
            do it until your heap has less then 2 nodes;
    */

    int arr[] = {4, 3, 2, 6};

    cout << "Minimum cost is: " << MinimumCost(arr, 4) << endl;
    return 0;
}