#include <iostream>
using namespace std;
// void mne(int arr[], int n){
//     for(int i=1;i<n;i++){
//         if(arr[i]!=arr[i-1]){
//             if(arr[i]!=arr[0]){
//                 cout<<'from'<<i<<'to';
//             }
//             else{
//                 cout<<" "<<i;
//             }
//         }
//     }
//     if(arr[n-1]!=0){
//         cout<<" "<<n-1;
//     }
// }
struct node
{
    node *next;
    int data;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
void mbonnaci(int n, int m){
    int arr[n];
    for(int i=0; i<n-1; i++){
        arr[i]=0;
    }
    arr[n-1]=1;
    for(int i: arr){
        cout<<arr[i]<<endl;
    }
    int curr_sum=1;
    for(int i=n; i<=m;i++){
        cout<<curr_sum<<endl;
        curr_sum+=arr[i];
        curr_sum-=arr[i-n];
    }
}

node *insert()
{
    node *prev = NULL;
    node* head;
    if (prev == NULL)
    {
        head = new node(1);
        prev=head;
    }
    for (int i = 2; i < 101; i++)
    {

        node *temp = new node(i);
        prev->next = temp;
        prev = temp;
    }
    return head;
    // if(prev==NULL){

    // }
    // node* temp= new node(x);
    // prev->next=temp;
    // prev=temp;
}
void print(node* root){
    while(root!=NULL){
        cout<<root->data<<endl;
        root=root->next;
    }

}
void subar(int arr[], int n , int i,int curr[]){
    if(n==i){
        cout<<curr[i]<<endl;
        return;
    }
    subar(arr, n, i,curr);
    curr[i+1]=arr[i+1];
    subar(arr, n,i+1, curr);
}
int main()
{
    //code;
    int arr[] = {1, 1, 1, 0, 0, 0, 1, 1, 0};
    // mne(arr,9);
    int curr[9]={0};
    subar(arr,9,0,curr);
    // node* d=insert();
    // mbonnaci(2,8);
    // print(d);
    return 0;
}