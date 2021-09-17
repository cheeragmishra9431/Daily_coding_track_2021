#include<iostream>
using namespace std;
struct Node{
    Node* left;
    Node* right;
    int key;
    Node(int x){
        left=NULL;
        right=NULL;
        key=x;
    }
};
Node* floor(Node* root, int x){
    Node* res=NULL;
    Node* curr=root;
    while(curr!=NULL){
        if(curr->key==x){
            return curr;
        }
        if(x<curr->key){
            curr=curr->left;
        }
        else{
            res=curr;
            curr=curr->right;
        }
        return curr;
    }
}
int main(){
//code;
return 0;
}