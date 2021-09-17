#include<iostream>
using namespace std;
struct node
{
    /* data*/
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
node* dcll(node* head){
    if(head==NULL){
        return NULL;

    }
    else if(head->next==head){
        delete head;
        return NULL;
    
    }
    else{
        head->data=head->next->data;
        node* temp=head->next;
        head->next=head->next->next;
        delete temp;
        return head;
    }
}
int main(){
//code;
return 0;
}