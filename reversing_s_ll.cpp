#include <iostream>
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
node* rsll(node* head)
{   
    node* curr= head;
    node* prev=NULL;
    // node* next=NULL;

    while(curr!=NULL){
        node* temp= curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
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
int main()
{
    //code;
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    display(head);
    node* x= rsll(head);
    display(x);

    return 0;
}