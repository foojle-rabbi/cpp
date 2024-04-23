#include<iostream>
using namespace std;

int main()
{
    /*
    Asha kori max heap er jei concept sheta bujhte parchos. jodi max heap er kahini bujhte parosh taile min heap bujah build kora easy hobe
    just khali koyekta condition change hobe eituku e. ar min heap kare koy mone ache ache ni? max heap e jemon root->data > left && right child data
    temoni min er ta hocche root->data < right->data && left->data;
                20
               /  \
              30   40
             / \   
            50  55

    eikhane arekta jinish mathay rakha uchit. amra jehetu heap build korar jonno array use korechi. ar array er moddhe amra 1 base indexing use
    korechi tai amr root er index jodi i hoy taile 
        left = 2 * ith index;
        right = 2 * ith index + 1;
    ---------------------------------------
    kintu 1 base indexing e eita vinno;
        root = ith index;
        left child = 2i + 1;
        right child = 2i + 2;

    baash ei tuku e mone rakhar moto.
    */

    // --> ar pore shomoy paile eitar qustion ta solve kore felish. 
    return 0;
}