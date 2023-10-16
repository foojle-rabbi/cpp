#include<iostream>
#include<vector>
using namespace std;

int countPrime(int n){
    int count = 0;
    vector<int> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i < n; i++){
        if(isPrime[i]){
            count++;
            for(int j = 2 * i; j < n; j = j + i){
                isPrime[j] = 0;
            }
        }
    }
    return count;
}

void printTable(int n){
    for(int i = 2; i < n; i++){
        for(int j = 2 * i; j < n; j = j + i){
            cout<<j<<endl;
        }
    }
}
int main()
{
    /*আচ্ছা এইখানের এই প্রব্লেম টা হইতেছে আমারে একটা নাম্বার দেওয়া থাকবো এবং আমারে ওই নাম্বার পর্যন্ত কtগুলা প্রাইম নাম্বার আছে তার সংখ্যা রিটার্ন করতে হইবো।
    as simple as that. তবে কথা টা হচ্ছে গিয়া আমি যদি নরমালি ১ নাম্বার টার মতো মানে আইটারেভ্লি করি তাইলে Tle বা Time limit exceed এর মত ইরর খামু। 
    বড় নাম্বার এর ক্ষেত্রে। আচ্ছা তোহ এইভাবে না করতে পারলে এপ্রোচ টা কি? এপ্রোভ টা ইজি ই যার নাম seive of erathothesis যদিও এইটার মানে এত ভালো করে
    বুঝি না তবে এই টার মানে হচ্ছে আমি ২ থাইকা ওই নাম্বার পর্যন্ত জামু বাট ওই নাম্বার এর যতগুলা গুনিতক আছে সব গুলারে not a prime number বানাইয়া দিব;
    এবং একটা কাউন্ট ভেরিএবল রাখবো যাতে করে সংখ্যা টা রিটার্ন করতে পারে। 
    */

    cout<<countPrime(100)<<endl;
    return 0;
}