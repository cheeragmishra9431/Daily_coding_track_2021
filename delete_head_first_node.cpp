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
node* delete_first_node(node* head){
    node* temp= head->next;
    delete head;
    return temp;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while(ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main(){
//code;
    node* head1=new node(10);
    node* head2=new node(10);
    node* head3=new node(10);
    head1 -> next=head2;
    head2 -> next=head3;
    display(head1);
    
return 0;
}