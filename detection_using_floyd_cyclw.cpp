#include<iostream>
using namespace std;
struct node
{
    /* data*/
    int data;
    node* next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
node* dfc(node* head){
    node* start=head;
    node* fast=head;
    while (fast!=NULL && fast->next!=NULL)
    {
        start=start->next;
        fast=fast->next->next;
        if(start==fast){
            break;
        }
    }
    if(start!=fast){
        return head;
    }
    start=head;
    while (start->next!=fast->next)
    {
        start=start->next;        /* code */
        fast=fast->next;        /* code */
    }
    fast->next=NULL;
    return head;
}
void display(node* head)
{
    node* curr= head;
    while (curr != NULL)
    {
        cout << curr->data << endl;
        curr = curr->next;
    }
}
int main(){
//code;
    struct node* head = new node(50);
    head->next = new node(20);
    head->next->next = new node(15);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(10);
 
    /* Create a loop for testing */
    head->next->next->next->next->next = head->next->next;
    node* x= dfc(head);
    display(x);

return 0;
}