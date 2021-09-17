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
void print_cll(node* head){

}
int main(){
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=head;
    int count=1,n,data;
    cout<<"no of nodes you want to insert"<<endl;
    cin>>n;
    node* temp=NULL;
    for(node *head; count<=n; count++){
        
        cout<<"insert"<<endl;
        cin>>data;
        head=new node(data);
        head->next=temp;

    }
    return 0;
//code;
return 0;
}