#include<iostream>
using namespace std;
void merge(int arr[],int ln,int mid){
    int temp[ln];

    if(ln==1){
        return;
    }
    int i=0,j=mid+1,k=0;
    while(i<mid+1 && j<ln){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            k++;
            i++;
        }
        else{
            temp[k]=arr[j];
            k++;
            j++;
        }
    }
    while(i<mid+1){
            temp[k]=arr[i];
            k++;
            i++;
    }        
    while(j<ln)
    {
            temp[k]=arr[j];
            k++;
            j++;
    }
    for(int i=0;i<ln;i++){
        arr[i]=temp[i];
    }

}
int main(){
//code;
    int arr[]={10};
    merge(arr,sizeof(arr)/sizeof(arr[0]),(sizeof(arr)/sizeof(arr[0]))/2);
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}