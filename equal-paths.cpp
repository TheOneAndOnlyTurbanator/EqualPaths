#include "equal-paths.h"
using namespace std;


// You may add any prototypes of helper functions here


bool equalPaths(Node * root)
{
    if(root == NULL){
       return true;
    }
    int diff;
    int left1 = getHeight(root->left);
    int right1 = getHeight(root->right);
    // Add your code below

    diff = right1 - left1;
    if(diff==0){
        return true;
    }else if(right1 == 0 && left1 == 1){
        return true;
    }else if(right1 == 1 && left1 == 0){
        return true;
    }else{
        return false;
    }
//helper function
}
int getHeight(Node * root){
    int height;

    if(root == NULL){
        return 0;
    }else{
        if(getHeight(root->left) > getHeight(root->right)){
             height = 1 + getHeight(root->left);
             return height;
             
        }else if(getHeight(root->left) < getHeight(root->right)){
             height = 1 + getHeight(root->right);
             return height;
        }else{
            height = 1 + getHeight(root->right);
            return height;
        }
    }
}

