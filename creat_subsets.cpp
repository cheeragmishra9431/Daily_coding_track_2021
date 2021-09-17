#include<iostream>
using namespace std;
struct node{
    node* left;
    node* right;
    int key;
    node(int x){
        key=x;
        left=NULL;
        right=NULL;
    }
};
void cub(string s, int i=0, string cur=" "){
    if(i==s.length()){
        cout<<cur;
        return;
    }
    cub(s, i+1, cur+s[i]);
    cub(s, i+1, cur);
}
int jos(int n, int k){
    if(n==0){
        return 0;
    }
    return (((jos(n-1,k)+k)%k)+n);
}
int gren(node* root, int max1){
    if(root!=NULL){
    int l=gren(root->left, max1);
    if((root->key)>max1){
        max1=root->key;
    }
    int r=gren(root->right,max1);
    return max(max1,l,r);
    }

}
int main(){
//code;
string str="abc";
node* head;
head->key=1;
head->left=new node(2);
head->right=new node(3);
cout<<gren(head, INT8_MIN);

cub(str,0," ");
cout<<jos(5,2);
return 0;
}