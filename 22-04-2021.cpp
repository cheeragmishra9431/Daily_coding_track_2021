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
int main(){
    int y[]={5,4};
    merge_1(y,1,0);
    for(int i=0; i<2;i++){
        cout<<y[i];
    }
    return 0;
}