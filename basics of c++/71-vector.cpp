#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}

int main()
{
    /*
    আচ্ছা ভেক্টর ও এরে এর মতই তবে তার মধ্যে আলাদা কিছু এক্সট্রা ফিচার আছে। যেমনঃ এরের সাইজ ফিক্সড করে দিতে যেখানে ভেক্টর এর সাইজ এইটা 
    অটোমেটিক নিয়া নেয়। ভেক্টর এর সিন্টেক্সঃ
        vector <data type> name;
    */

    vector <int> vec;
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(6);   

    // display(vec);
    /*
    accha eita gleo vector er basic kahini. tachra vecotr er onke advance topic ache onke advance usage ache oigula o thik 
    moto sikhte hoibo. tobe apatoto just ekta basic dharona nia rakh. je konta kivabe kaaj kore, keno kaaj kore etc;
    */

    vector<int> :: iterator iter;
    iter = vec.begin(); //ektu aage je koilam iteraotr hocche ekta pointer er moto jeta onno kichu te point kre. ekhane 
                        //iter vector er begin re point koia rakhche. dekh tore iterator dia display koira dekhai:
    for(iter = vec.begin(); iter != vec.end(); iter++){
        cout<<(*iter)<<" ";
    }

    /*
    zaak etato just ekta basic dharona dilam. aro onek usages age oigula shikha dorkar..
    */
    return 0;
}