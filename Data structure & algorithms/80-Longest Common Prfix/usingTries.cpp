#include<iostream>
#include<vector>
using namespace std;

void print(vector<string> str){
    cout << "Elements of vector: ";
    for(int i = 0; i < str.size(); i++){
        cout << str[i] << endl;
    }
}

vector<char> commonPrefix(vector<string> str){
    vector<char> ans;

    for(int i = 0; i < str.size(); i++){
        char ch;
        for(int j = 0; j < str[i].size(); j++){
            if(ch == str[i][j]){

            }else{
                break;
            }
        }
        ans.push_back(ch);
    }
    return ans;
}

/*
Bujhlam na vai mathar moddhe taile ettota problem hoiteche je ei easy easy problem gulate logical error lagaiya laitehci
ar thik moto solve e korte partechi na? Khoda amar toh unno ti na borong obonoti hoiteche. er karon maybe not practicing
or not drying run problems. 
*/

int main()
{
    vector<string> str = {"coder", "codeman", "coper"};
    print(str);

    vector<char> ans = commonPrefix(str);

    for(auto i : ans){
        cout << i;
    }
    return 0;
}