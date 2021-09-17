#include<iostream>
using namespace std;
struct node{
    node* next;
    node(){
        next=NULL;
    }
};
struct mysarray{
    int* arr;
    
    int no_ll;
    int arrp=-1;
    mysarray(int y, int z ){
        arr=new int(y);
        no_ll=z;
        

    }  
    

};
int main(){
    node* head;
    node* as;
    head->next= as; 
    cout<<head;
//code;
return 0;

}