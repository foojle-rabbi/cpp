#include<iostream>
using namespace std;

int main()
{
    /*
    Accha er ageo bitwise opearator shomporke pora hoichilo but etota clear hoy nai; asha kori eitar por ar kono confusion thakar
    kotha na;

    tar aage boila nei, jehetu eigular name e bitwise operator tai eder kaaj o hobe bit level e; mane 0 ar 1 er format e
    bitwise operator:
    1. & -> biwise and 
    2. | -> biwise or
    3. ~ -> bitwise not
    4. ^ -> bitwise xor 

    1. & bitwise and:
        sohoj kothay koite gele bitwise (&) mane hoiteteche (gun) mane multiply 
        1 1 = 1;
        0 1 = 0;
        0 0 = 0;
        1 0 = 0;
    
    2. | bitwise or:
        bitwise er kkhetre ekta 1 thaklei 1;
        1 1 = 1;
        0 0 = 0;
        1 0 = 1;
        0 1 = 1;

    3. ^ bitwise xor:
        bitwise xor er kkhetre 2 ta 1 thakle 0 baki kkhetre 1;
        1 1 = 0;
        0 1 = 1;
        1 0 = 1;
        0 0 = 1;
    
    4. ~ bitwise not:
        bitwise or shudhu ekta binary er kkhetre hoy mane ekkhetre she 1 re 0; ar 0 re 1 e convert kore dey;
        0 = 1;
        1 = 0;
        1 = 0;
        0 = 1;
    */

    //ami nije theke 2 ta intiger nichi tarpor oigular binary form ber korechi; tar moddhe ekta kotha koi, jannat re binary
    // songkhar golpo poraite gia ami binary ta aro valo vabe bujhchi
    int a = 5;
    int b = 3;

    cout<<"a & b: "<<(a&b)<<endl;
    cout<<"a | b: "<<(a|b)<<endl;
    cout<<"a ^ b: "<<(a^b)<<endl;
    cout<<"~b : "<<(~b)<<endl;

    //lets see je amar output er sathe program er output mile kina;
    //nah nah oti dukkher sohit janano jacche je program er output er sathe amar output mile nia!! :(
    return 0;
}