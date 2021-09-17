#include<iostream>
using namespace std;
int bni(int arr[], int n, int x){
    int low=0, high=n-1;
    
    while(low<=high){
        
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
    }
    return -1;
}
int main(){
//code;
    int asd[]={1,2,3,4,5,6,7};
    int x=7;
    cout<<bni(asd,x,6);
    return 0;
}