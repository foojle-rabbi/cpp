#include<limits.h>

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x != 0){
            int digit = x % 10;            
            ans = ans * 10 + digit;
            x /= 10;
        }
        return ans;
    }
};

//second
class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x != 0){
            int digit = x % 10;
            if(ans < INT_MIN / 10 || ans > INT_MAX /10){
                return 0;
            }
            ans = ans * 10 + digit;
            x /= 10;
        }
        return ans;
    }
};

/*
Explanation: first of all jodi tumi first code ta run koro taile kono error ashbe na; shob gula run case e thik moto cholbe;
but jokhon e tumi submit korba tokhon e error khaibaa; ekhon kotha hocche error keno khaibaa? error khaiba karon oikhane
ekta condition chilo je reversed number jeno integer limit overflow na kore; toh prothom tay reverse number overflow kore
kina ta check korar kono condition chilo na; tai error throw korche;

ar ekhane condition ta tore valo vabe bujhai: condition ta emn kere eita nia e to tor somossa chilo tai na? tor main kotha
hocche ans er value 10 er loge multiply korar agei deikha loiche je jodi ami multiply kori taile ki eta overflow korbe kina;
jodi overflow kore taile ar samne agaitam na; ekhan thaikai return 0; maira dimu; ar INT_MIN / 10 hoiche karon ans er loge 10
* thakle henda mane daine gia vag / hoiya jay; somikoron er rules onujayi;
*/