#include<iostream>
using namespace std;

int squareRoot(int num){
    int left = 0, right = num, ans = -1;
    
    while(left <= right){
        int mid = left + (right - left) / 2;
        int square = mid * mid;
        if(square == num){
            return mid;
        }else if(square > num){
            right = mid - 1;
        }else{
            ans = mid;
            left = mid + 1;
        }
    }
    return ans;
}

int main()
{
    /*
    69- square root
    
    tomare ekta number deoay thakbe ar tomake oi number er root er value koto ta return korte hobe; jemon 25 dile return korbe 
    5; 36 dile return korbe 6; emon arki;

    hint: linear search dia kora jay but with the cost of O(n); but amra jodi log time e korte chai taile bianry search apply
    korte hoibo; so think it in your own way: and solve it;
    */

    while(1){
        int n;
        cout<<"Enter a number: "; 
        cin>>n;

        cout<<"Square root of " <<n<<" is "<<squareRoot(n)<<endl;
    }
    return 0;
}