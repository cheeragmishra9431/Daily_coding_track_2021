#include<iostream>
using namespace std;
void merge_1(int arr[],int end,int start){
    int ln= (end-start)+1;
    int temp[ln];

    if(ln==1){
        return;
    }
    int mid=(ln/2-1)+start;
    int i=start,j=mid+1,k=0;
    while(i<mid+1 && j<=end){
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
    while(j<=end)
    {
            temp[k]=arr[j];
            k++;
            j++;
    }
    for(int i=start;i<=end;i++){
        arr[i]=temp[i];
    }

}
void merge(int arr[], int end, int start){
    int ln= (end-start)+1;
    if(ln=1){
        return;
    }
    
    int mid=(ln/2-1)+start;
    if(end>start){
        merge(arr,mid,start);
        merge(arr,end,mid+1);
        merge_1(arr,end,start);
    }
}
int main(){
//code;
    int arr[]={0,4,2,7,8,9};
    
    merge(arr,5,0);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}