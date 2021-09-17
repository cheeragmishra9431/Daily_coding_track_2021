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
void mn(node* head){
    if(head=NULL){
        return ;
    }
    node* fast=head;
    node* slow= head;
    while (fast!=NULL & fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
    
}
int main(){
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    mn(head);


//code;
return 0;
}