#include<iostream>
using namespace std;
void rda(int arr[], int n){
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[res]){
            arr[res+1]=arr[i];
            res++;
        }
    }
    for(int i=0;i<res+1;i++){
        cout<<arr[i];
    }
}
int main(){
    int n=8 , art[]={3,3,4,5,5,6,6,7};
    rda(art,n);
    return 0;
}