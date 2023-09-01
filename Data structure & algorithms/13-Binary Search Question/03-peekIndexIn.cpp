#include<iostream>
using namespace std;

int main()
{
    /*
    852- peek index in a mountain array;
    problem ta holo gia tomare ekta array deoya thakbe jetar graph mountain er moto hobe mane prothome nich theke upore uthbe
    tarpor upor theke niche namte hobe; emon e arki like: [1, 2, 5, 9, 2, 0]; eitar graph o kintu hobe mountain type er
    ekhon ei array er sob chyeye upore peek element hobe 9; ar amake ei 9 er index e return korte hobe; 

    hint: acha jehetu array ta mountain taile 3 ta point thakbe 1. first e 2. peek point 3. last e; so first condition
    arr[mid] < arr[mid + 1] tar mane target aro upore ache ar jodi eita na hoy taile hoyto amar mid e hoiteche uttor ar notyo
    end = mid;
    */


    class Solution {
        public:
        int peakIndexInMountainArray(vector<int>& arr) {
            int left = 0;
            int right = arr.size() -1;
            int ans = -1;
            while(left < right){
                int mid = left + (right - left) / 2;
                if(arr[mid] < arr[mid+1]){
                    left = mid + 1;
                    ans = left;
                }else{
                    right = mid;
                }
            }
            return ans;
        }
    };

    return 0;
}