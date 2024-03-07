#include<iostream>
using namespace std;

int main()
{
    
    return 0;
}

/*
আচ্ছা ডায়ামিটার হইলো গিয়া আমার কোনো একটা ট্রি এর যেকোনো ২ টা লিফ নোডের ম্যাক্সিমাম হাইট। আর এইটা সল্ভ করার এপ্রোচ ও কাইন্ডা ইজি কারন যেহেতু ট্রি এর প্রব্লেম আর আমরা জানি ট্রি এর 
বেশির ভাগ প্রব্লেম ই সল্ভ করা হয় আমাদের বহুল পরিচিতি রিকারশন এর ইউস করে। তাই কোড বেশি না। তোহ প্রথমে যেই এপ্রোচ সেটা টাইম কমপ্লেক্সিটি হইলো n square. 

নিয়ম টা হচ্ছে যে। ভাই আমি যেহেতু রুট তাই আমার লেফট সাব ট্রি তেও ডায়ামিটার থাকতে পারে। আবার রাইট সাবট্রি তেও ডায়ামিটার থাকতে পারে। তাই তুমি লেফট আর রাইট ২ টার ই ডায়ামিটার বের 
করে নিয়া আসো। আবার আরেকটা কি হইতে পারে কি আমার যেই লেফট ট্রি আর রাইট ট্রি এই ২ টার মিলাইয়া ও অর্থাৎ রুট নোড রে নিয়াও ডায়ামিটার হইতে পারে তাই তুমি কর কি লেফট এর হাইট আর 
রাইট এর হাইট বাহির কইরা রুট নোডের একটা নোড অর্থাৎ ১ প্লাস করে দেও।এখন যেহেতু ৩ টাই হইতে পারে। 

আর আমরা জানি ডায়ামিটার একমাত্র ম্যাক্সিমাম হয় তাই তুমি একটা আন্সার এ এই ৩ টার মেক্স বাহির কইরা আন্সার রিটার্ন কর। ব্যাস।

------------------
tobe ha eikahne ekta kahini ache mane jhamela ache karon ami jodi same max height ar left diameter ar right diameter er hisab kori taile amar complexity aibo
big o n^2 jeita optimised na. tobe eita optimized korar ekta way ache. just simple 1 line er code: ans = max(ans, 1 + leftHeight + rightHeight); ar ei ans ta 
e hocche amar real ans. tobe ans er hoyto pass by refference othoba gloabal variable hisebe use kora jaite pare.
*/