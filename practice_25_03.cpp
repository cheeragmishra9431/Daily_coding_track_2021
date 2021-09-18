#include<iostream>
#include<set>
#include <bits/stdc++.h>
#include<map>
using namespace std;
void sd(set<int> s){
    for(auto it=s.begin(); it !=s.end(); it++){
        cout<<*it<<endl;
    }
}
struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int x){
        key=x;
        left=NULL;
        right=NULL;
    }

};

// int count=0;
// Node* kth(Node* root, int k){
//     if(root!=NULL){
//         kth(root->left,k);
//     }
//     count++;
//     if(count==k){
//         return root;
//     }
//     kth(root->right, k);
// }
int prev=INT_MIN;
bool ceck(Node* root){
    if(root==NULL){
        return true;
    }
    if(root!=NULL){
        return ceck(root->left);
        if(root->key<=::prev){
            return false;
        ::prev=root->key;
        return ceck(root->right);
        }
       

    }
}
void vs(Node* root, int hd, map<int,int> mp){
    if(root==NULL){
        return;
    }
    mp[hd]+=root->key;
    vs(root,hd-1,mp);
    vs(root, hd+1,mp);


}
void in(int arr[], int n, int x){
    n++;
    arr[n-1]=x;
    for(int i=n-1; arr[i]<arr[(i-1)/2] && i!=0; i=(i-1)/2){
        swap(arr[i],arr[(i-1)/2]);
    }
}
void u(map<int,int> mp){
    for(auto it: mp){
        cout<<it.second<<endl;
    }
}
int main(){
//code;
int arr[]={1,3,2,4,5,6};
// in(arr,6,0);
set<int> s(arr,arr+6);

for(int i: s){
    cout<<i<<" ";
}
// set<int> s;
// s.insert(10);
// s.insert(210);
// s.insert(120);
// s.insert(102);
// sd(s);
return 0;
}