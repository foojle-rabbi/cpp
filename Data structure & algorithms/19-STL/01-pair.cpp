#include<iostream>
using namespace std;

int main()
{
    /*
    Brother pair mane hoiteche jugol ba joora; ekhon kotha hocche jodi tomar ekoi sathe 2 ta vlaue store korte hoy or 2 ta value return 
    korte hoy shekkhetre tumi stl er pain containder use korte paro;
    */

    pair<int, int> p = {2, 6};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, pair<int, int>> p2 = {1, {3, 5}};
    cout<<p2.first;
    cout<<p2.second.first;
    cout<<p2.second.second<<endl;

    pair<int, int> arr[] = {{1, 3}, {5, 2}, {2, 9}};
    cout<<arr[0].second<<endl; 
    cout<<arr[1].first<<endl;

    pair<int, pair<int, int>> pr[] = {{2, {1, 3}}, {1, {2, 5}}};
    cout<<pr[1].second.first<<endl;

    //tar mane ami chaile nested pair er array o create korte pari;
    return 0;
}