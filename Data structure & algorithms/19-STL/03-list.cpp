#include<iostream>
#include<list>
using namespace std;

int main()
{
    /*
    c++ e list mane hoiteche linked list;
    */  

    list<int> ls;
    ls.push_back(5);
    ls.push_back(52);
    ls.push_front(-42);

    ls.pop_back();
    ls.pop_front();
    for(auto i:ls){
        cout<<i<<" ";
    }
    cout<<endl;

    list<int> ls2(ls);
    ls2.push_back(6);
    ls2.push_front(987);

    for(auto i:ls2){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<ls2.back();

    /*
    Okay then eita nia ar temon ki bolmu; shob function ba kaaj gula ager tar moto mane vecotr er motoi; 
    size, end, begin, pop_back, pop_fornt, push_front, push_back, back(), empty, clear, insert etc; ar tarporeo jodi aro janar iccha 
    thake tahole visit: some website or ask chatgpt
    */
    return 0;
}