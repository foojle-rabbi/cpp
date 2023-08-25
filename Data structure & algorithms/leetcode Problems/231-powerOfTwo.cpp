#include<math.h>
class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i = 0; i <31; i++){
            int ans = pow(2, i);
            if(ans == n){
                return true;
            }
        }
        return false;
    }
};

/*ei solution ta hocche brute force; tobe eitar cheyeo aro valo ekta solution paichi; prothome to love babbar miyar ans er 
moddhe 2 er proti barer power store kore rakhar; fole bar bar ar power bar kora lagto na; tobe tar thekeo aaro valo ekta
solution pailam discussion section e; oikhane bit manupilation use koira solve korche valoi lagche;
*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n > 0){
            if((n & (n-1)) == 0){
                return true;
            }
        }
        return false;
    }
};

/*
Vai this solution is marattok karon eita prothomoto bit nia kahini kore; ar eitar approch tao shei; first eita check kore
je given number ki positive number kina? jodi 0 theke < n er man boro hoy tokhon sheta positive number; ar seocndly eita
check kore je n & n -1 == 0; kina; 

jei shokol number two er power jay shei shokol number re tar cheye 1 number kom shonkha dia & korle 0 ase; ar ei logic tai 
eikhane apply korche;
*/