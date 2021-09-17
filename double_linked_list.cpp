#include<iostream>
using namespace std;
struct dll{
    int data;
    dll* next;
    dll* prev;
    dll(int x){
        data=x;
        prev=NULL;
        next=NULL;
    }
};
dll* insert_begin_dl(dll *head, int dt){
    dll* temp=new  dll(dt);
    temp->next= head;
    if(head !=NULL){
        head->prev=temp;
    }
    return temp;
}
int main(){
    dll *head=new dll(10);
	dll *temp1=new dll(20);
	dll *temp2=new dll(30);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
//code;
return 0;
}