class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, product = 1;
        while(n!= 0){
            int r = n % 10;
            product *= r;
            sum += r;
            n /= 10;
        }
        int ans = product - sum;
        return ans;
    }
};

/*
I think eitar ar kono explanation dorkar nai;
*/