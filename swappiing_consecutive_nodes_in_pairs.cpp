#include <iostream>
using namespace std;
struct node
{
    /* data*/
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
node *scw(node *head)
{
    node *curr = head;
    node *prev = curr;
    head = head->next;
    while (curr != NULL && curr->next != NULL)
    {
        node *temp = curr->next->next;
        prev->next = curr->next;
        curr->next->next = curr;
        curr->next = temp;
        prev = curr;
        curr = curr->next;
    }
    return head;
}
void display(node *head)
{
    node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << endl;
        curr = curr->next;
    }
}
int main()
{
    //code;
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);
    display(head);
    node* x=scw(head);
    display(x);
    return 0;
}