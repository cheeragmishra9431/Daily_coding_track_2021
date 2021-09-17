#include<iostream>
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
struct mystack{
    int sz;
    node* head;
    mystack(){
        sz=0;
        head=NULL;
    }
    void push(int x){
        node* temp=new node(x);
        temp->next=head;
        head=temp;
        sz++;
        
    }
    int pop(){
        node* temp=head;
        int res=head->data;
        head=head->next;
        delete temp;
        sz--;
        return res;
    }
};
int main(){
//code;
mystack s;

s.push(10);
s.push(12);
s.push(13);
s.push(14);
cout<<s.pop();

return 0;
}