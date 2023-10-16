#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }

    while(a != b){
        if(a > b){
            a = a - b;
        }else{
            b = b - a;
        }
    }
    return a;
}

int main()
{
    //gcd একটা সুত্র বা ফাংশন আছে gcd(a, b) = gcd(a - b, b); অর্থাৎ আমি যদি আমার নিজের ভাষায় বলি তাইলে একটা ফাংশন এ আমি যদি ২ টা ভ্যালু পাস 
    // করি তাইলে তাদের ২ টার মধ্যে যতক্ষন না এক্টার মান ০ শুন্য হইতেহে ততক্ষন ফাংশন চলাও আর যদি এক্টার মান ০ আসে তাইলে ২য় টা হচ্ছে উত্তর।

    cout<<gcd(25, 15)<<endl;
    return 0;
}