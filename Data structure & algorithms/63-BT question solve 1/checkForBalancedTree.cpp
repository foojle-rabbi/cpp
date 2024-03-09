#include<iostream>
using namespace std;

height function
int height(Node* root){
    if(root == nullptr){
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    return max(left, right) + 1;
}
//first approach
bool isBalanced(Node* root){
    if(root == NULL){
        return true;
    }

    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);

    bool difference = abs(height(root->left) - height(root->right)) <= 1;

    return (left && right && difference);
}

// -------------------2nd approach------------------

/*
    accha ami jodi optimised soltuin chai taile amar height calculate kora jay emon ekta system banaite hoibo jate kore height function re call koira jeno amar extra
    time na khay. tai ami ekta pair type er variable declare korlam ei vaiba jate first tay rakhbo boolean ans ar second tay rakhbo amar tree er height jate kore 
    linear time complexity tei hoiya jay.
*/
pair<bool, int> isBalancedOptimised(node* root){
    if(root == nullptr){
        pair<bool, int> p = make_pair(true, 0);
        //eitate tumi eivabe kothin kore na lekhe easy te lekhte paro.
        p.first = true; //karon amra jani null node er jonno true
        p.second = 0; //karon null node er height 0;
        return p;
    }

    /*
    ekhon root e jehetu acho tai left er ta age bahir koro tarpor right er ta bahir koro. ekhon jehetu recursively bahir korbo tai tomar eto mathe ghamanor 
    dorkar nai. Just shudhu eituku jene rakho je recursion amar uttor nia asbo. kemne nia aibo sheta she jane 
    */
    pair<bool, int> left = isBalancedOptimised(root->left);
    pair<bool, int> right = isBalancedOptimised(root->right);

    //ekhon jehetu oi ta recursion korche. tai eita vabo je tomar uttor aisha porche. tai eibar first e tumi left ar right subtree er diffrence bahir kro je oi
    // value ta ki tomar 1 er cheye choto kina.? 
    bool diff = abs(left.second - right.second) <= 1;

    //এইবার মনে কর যে, তোমার আন্সার আইসা পরছে। কিন্তু আন্সার রিটার্ন তো করতে হবে নাকি? তাই আন্সার নামের একটা ভেরিএবল ডিক্লেয়ার করলাম। 
    pair<bool, int> ans;
    //Jeehtu aamr ans er first ta store kore bollean type tai ami check kortechi je amar 3 ta condition ture kina? and sheta first e rekhe dicchi
    ans.first = left.first && right.first && diff;

    //ar amra jehetu jani je amader second store kore height tai amara height ber korar logic eikhane apply korchi. je vai left ar right er second er max tar sathe + 1;
    ans.second = max(left.second, right.second) + 1;

    // eibr just khali ans ta return koro
    return ans;
}

bool isBalanced(node* root){
    return isBlancedOpimised(root).first;
}

int main()
{
    /*
    Balanced tree hocche oi shokol tree jader (heightLeftSubtree - height of right subtree <= 1); tarai balanced treee. toh eikhane first jei approch seita easy 
    e tobe at the cost of big O(n^2) time complexity. toh system hocche gia je prothome root node er eikhane aisha jiggasa korbe je vai tui ki balnced? toh
    she bolbe je age left e ja left re jiagaiya ayy. tokhon left er jonno isBalanced function call hobe. 

    emon korte korte ekta shomoy left er vlaue null hobe tokhon jokhon jiggasha kora hobe je vai tui ki balanced tokhon she bolbe je vai ami toh null tai ami 
    balance tai return korlam True. pore right subtree er jonno abar same function recursively call hobe. toh shei tao emon korte korte null houyar por true return 
    korbe.

    tar por ashbe je amar left subtree ar right subtree er hight er difference ki <= 1; hoy kina? jodi 3 ta ans e true hoy tahole ans return korba ture. ar na hole
    ans return korba false;

    --------------------------------------------
    2nd approach:
    Accha ekhon ashi amader 2nd approach er dike jeta kina linear complexity te finish kore.

    */
    return 0;
}