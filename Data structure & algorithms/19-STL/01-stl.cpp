#include<iostream>
#include<vector>

using namespace std;

int main()
{
    /*
    
    */
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(5);
    vec.push_back(1);
    vec.push_back(0);

    for(auto i : vec){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}