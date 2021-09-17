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
node* dkc(node* head, int k){
    if (head==NULL)
    {
        return NULL;
    }
    else if(k==1){
        node*curr=head->next;
        delete head;
        return curr;
    }
    else{
        int i=2;
        for ( node* curr=head->next; i < k; i++)
        {
            /* code */
            if(i==k-1){
                curr->next=curr->next->next;
                delete curr->next;
                return head;
            }
            curr=curr->next;
        }
        
    }
    
}
void display(node* head){
    if(head==NULL){
        cout<<"blahh"<<endl;
    }
    while(head->next!=head){
        cout<<head->data;
        head=head->next;
    }
}
int main(){
//code;
node* head=new node(1);
head->next=new node(2);
head->next->next=new node(3);
head->next->next->next=new node(4);
head->next->next->next->next=new node(5);
head->next->next->next->next->next=head;
dkc(head,3);
display(head);
return 0;
}