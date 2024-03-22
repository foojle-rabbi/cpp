#include<iostream>
using namespace std;

class node{

}

/*

*/

node* lca(node* root, int n1, int n2){
    //base case
    if(root == nullptr){
      return nullptr;
    }

    if(root->data == n1 || root->data == n2){
      return root;
    }

    node* leftAns = lca(root->left, n1, n2);
    node* rightAns = lca(root->right, n1, n2);

    //ekhon check koro je amar left ar right jei ans nia ashle eigular moddhe ki ki ache
    if(leftAns != NULL && rightAns != NULL){
      return root;
    }else if(left != NULL && rightAns == nullptr){
      return leftAns;
    }else if(leftAns == nullptr && rightAns != NULL){
      return rightAns;
    }else{
      return nullptr;
    }
}

int main()
{
    /*
    Lowest common ansesotr of a birnay tree.
    vai ekta sotti kotha hocche ki janosh? sotti kotha hocche gia ei je problems gula ze kortechi tree er mane bianry tree er. asole ei queston gula ache na easy
    lage nare. 

    er age jei question gula korchilam oigula eto ta hard mone hoy nai. ar tachara arekta boro kotha hocche gia je ami ei koyekdin thik moto monojog dite partechina 
    monojoger mane hocche focus er ovabe ami question gula e valo vabe porlam na. 

                  4
                /   \
               2     5
             / \    / \
            7   1  2    3
    
    amar eikhane n1 = 1 hoy ar n2 = 3 hoy taile ei 2 tar e common jei node sheta hocche amar 4. taile amar ans o hobe 4.
    */
    //okay first lets find path. of 2. the path will be 4->2
    return 0;
}