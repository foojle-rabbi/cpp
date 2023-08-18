#include<iostream>
#include<list>
using namespace std;

int main()
{
    /*
    Accha list mane hoiteche linked list. haa tui thik koichot oi data structure er link list e. jeta te int float, char, doulbe
    data store kore. 

    eitao normally vecotr er motoi declare korar process; ar hoo list use korar jonno <list> header file include kora lagbo
    */

    list <int> list1; //etar mane holo ami 0 size er ekta list declare korlam; mane etar kono size initialize korlam na
    list <int> list2(5); //etar mane hoilo ami 5 size er ekta list initialize korlam;

    list<int> :: iterator iter;
    iter = list1.begin(); //etar mane holo ami ekta iteraotr re list1 er first elements er moddhe point koraiya dilam;
    //ar jehetu aagei koichi je iteraotr hocche ekta pointer er moton tai pointer dia jaa jaa kora jay thik smae vabeo 
    // iterator diao kora jaay; mane arithmitic pointer mane iter++ kora jay; er fole er porer elemets re point korbe;

    // etar moddheo list.begin() and list.end() shob function e avilable ache;
    list1.pop_back(); //it will remove the last elements
    list1.pop_front(); //it will remove the first elemt
    list1.remove(5); //it will remove the elemtnt 5;
    list1.sort(); //it will sort the list;
    list1.merge(list2); //eta list 1 er sathe list 2 ke merge kore 
    // list1.reverse(); it will reverse the whole list

    // eigula hoitehce normal kichu function; tachara eder arro onek usage ar implemet ache. seigula janar jonno tui simply
    // -> visit kor : cppreference.com
    // -> visit kor: cplusplus.com
    return 0;
}