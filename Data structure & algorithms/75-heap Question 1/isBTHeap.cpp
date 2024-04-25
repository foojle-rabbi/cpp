#include<iostream>
using namespace std;

int main()
{
    /*
    Orthat amake ekta bt iyani binary tree deoya thakbe. output hisabe bolte hobe je eita ki ekta heap kina?
    ekhon kivabe solve kora jay? 

    accha ekta bt kokhon heap hobe? 
    ekta bt tokhon e heap hobe jodi she 2 ta condition satisfy kore. 
        1. it have to be a CBT(complete binay tree)
        2. it must satisfy the heap order property.

    1) complete binary tree kake bole sheta toh amra already jaina aschi. tarporo revision er jonno arekta boli.
    jodi amar ekta tree er protita level full hoy except the last level. ar insertion hoibo shob shomoy left theke tahole amar oi tree ta ekta CBT

    2) heap order propery orthat max heap er khetree nth postion nodes value should be greaater than its left and right child node's value. and 
    hae vai eituku e. ar nth node er left child ar right child kivabe ber korte hoy sheta toh amra jani e. jarpor o:

    for 0 base indexing
        ith node
        left = 2 * i;
        right = (2 * i) + 1;

    for 1 base indexing
        nth index 
        left = 2*i + 1;
        right = 2*i + 2;
    */

    //sotti kotha hocche ei tar approach ta bujhchi thik e but code kichu ta complicated. tai porer jonno rekhe dilam. 
    //but will solve this soon. 
    return 0;
}