class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n != 0){
            if(n & 1){
                count++;
            }
            n = n>>1;
        }
        return count;
    }
};

/*
I think code tar kichu explanation dorkar; karon ami first e normally digit hiseb koira solve korte gechi kintu unfortunately
digit dia korte gele error mare; karon ami jodi digit dia kori taile oitar binary number hoibo onno ta; jemon jodi ami 101
input dei taile eitar bianry number hoy- 1100101 so i will throw erro;

according to chatgpt hte "hammingWeigh" problem is bit manipulation problem; so you cant do it with your digit approch; you
have to use bit manupilation; 
*/

//its not the right solution casue it dont work with bit
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n != 0){
            int digit = n % 10;
            if(digit == 1){
                count++;
            }
        }
        return count;
    }
};
