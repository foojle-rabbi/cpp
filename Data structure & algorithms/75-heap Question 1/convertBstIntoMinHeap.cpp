#include<iostream>
using namespace std;

int main()
{
    /*
    problem tar moddhe 2 ta condition deoya. orthat ami jei heap e convert korbo sheta jeno following condition satisfy kore.
        1. satisfy min order property.
        2. left child node's value will be less than right child's values;

    approach:
    approach is pretty easy. jehetu amar deoya oi tree ta already a complete bianry tree tai amar structure er kono change ashbe na
    just khali value gular change ashbe. ar eikhane ekta jinish kheyal korbe dekhbi je amare bola ache je amar left er value right er value 
    less then hote hobe for each and every nodes.

    mane left > right; root < right;
    so amra ki bolte pari na je: root < left < right; aaccha aro easy kore jodi bolte jai tahole bishoy ta daray emon je,
    jehetu ami min heap make korbo tai amar left er value root theke boro hobe abar right er value o root theke boro hobe. er mane
    root < left < right; 
    orthat eikhane amra pre order dekhte partechi. 

    step 1: first store the inorder;
    step 2: do preOrder traversal and then put the inorder's value to the tree. 

    problem solved!
    */
    return 0;
}