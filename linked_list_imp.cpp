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

int main(){
    node* head1=new node(10);
    node* head2=new node(10);
    node* head3=new node(10);
    head1 -> next=head2;
    head2 -> next=head3;
    


//code;
return 0;
}