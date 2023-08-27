class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        int count, i = 0;
        sort(arr.begin(), arr.end());
        
        while(i < arr.size()){
            count = 1;
            for(int j = i + 1; j < arr.size(); j++){
                if(arr[i] == arr[j]){
                    count++;
                }else{
                    break;
                }
            }
            ans.push_back(count);
            i = i + count;
        }

        sort(ans.begin(), ans.end());
        for(int i = 0; i < ans.size() - 1; i++){
            if(ans[i] == ans[i + 1]){
                return false;
            }
        }
        return true;
    }
};

/*
Explnation: code ta mutamoti beginer friendly cause eitate maps and hashmaps use koira aro kom complexity te solution kora jaito
but jehetu ami ekhon oigula kori nai; tai amar kache ei code tai beshi easy mone hoiche;
    1. first e array re sort korche;
    2. pore array re traverse korche; ar jodi duplicate number paiche tokhon count er man baraiya diche; pore count kora shesh hoile
        mane ar na mil paile loop thaika break marche; tar por loop thaika bahir hoiya oi count er value ans name ekta vecotr(vector is
        like an array) e store korche ar i er value count er shoman koira diche karon count er man joto hobe toto tai to duplicate
        number chilo; tai er porer for loop e er porer value gula theke check korbe;
    3. tar por shob gula count shesh hoile ans re sort korbo;
    4. tarpor sort kora hoile check korbo je kono value same ache kina; jodi same thake tahole return korbe false; ar jodi na mile
        tahole loop theke ber hoiya true return korbe; 
*/