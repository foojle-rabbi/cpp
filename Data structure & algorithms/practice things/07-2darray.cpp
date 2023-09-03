#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> arr = {
        {2, 5, 7}, 
        {5, 8}, 
        {2},
    };

    // cout<<arr.size()<<endl;
    // for(int i = 0; i < 4; i++){
    //     cout<<arr[i].size()<<endl;
    // }

    //okay lets see how can i print this;
    for(int i = 0; i <= arr.size(); i++){
        for(int j = 0; j < arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
Hayre fojle asha kori eitar kahini buijha gechos; are temon kahini na; vecotr jinish ta korra oi; tobe eikhane arr.size dia
total koyta row ache ta ber korche; tar arr[i].size(); protita row e kotota column ache ta ber kore; jakk korra jinish;


*/