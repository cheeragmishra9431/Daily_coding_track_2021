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
node* insert_new_node(node* head, int pos, int data){
    node* temp= new node(12);
    node* curr= head;
    for(int i=1; i<=pos-2; i++){
        if(curr->next==NULL){
            return head;
        }
        curr=curr->next;
    }
    return head;
}

int main(){
    node* head1=new node(10);
    node* head2=new node(10);
    node* head3=new node(10);
    head1 -> next=head2;
    head2 -> next=head3;
    


//code;
return 0;
}