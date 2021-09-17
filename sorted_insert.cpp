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
    node()
    {
        data = NULL;
        next = NULL;
    }
};
node *sorted_inseert(node *head, int data)
{
    node *temp = new node(data);
    if (head == NULL)
    {
        return temp;
    }
    else if (head->data < data)
    {
        temp->next = head;
        return temp;
    }
    node *curr = head;
    while (((curr->next) != NULL) & ((curr->next->data) < data))
    {
        /* code */
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp->next;
}
void disp( node* head){
    while (head!= NULL )
    {
        /* code */
        cout<<head->data<<endl;
        head=head->next;
    }
    
}
int main()
{
    //code;
    // node *head = new node(10);
    // head->next = new node(20);
    // head->next->next = new node(30);
    // head->next->next->next = head;
    int x, n=4;
    node* temp;
    node* head; 

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << "enter" << endl;
            cin >> x;
            temp = new node(x);
            head=temp;
        }
        if(i==n-1){
            cout << "enter" << endl;
            cin >> x;
            temp->next = new node(x);
            temp->next->next=NULL;
        }
        else
        {

            cout << "enter" << endl;
            cin >> x;
            temp->next = new node(x);
            temp=temp->next;
        }
    }
    disp(head);


    return 0;
}