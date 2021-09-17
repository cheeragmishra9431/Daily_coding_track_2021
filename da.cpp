#include<iostream>
using namespace std;
int get_largest(int arr[], int n){
    int hig=arr[0];
    for(int i=0;i<n;i=i+2){
        if(arr[i]>hig){
            hig=arr[i];
        }
    }
    return hig;
}
int main(){
    int n=5, arl[n]={0,3,4,6,7};
    
    cout<<get_largest(arl, n);
    return 0;
}