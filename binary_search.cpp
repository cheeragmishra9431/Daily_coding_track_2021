#include<iostream>
using namespace std;
int BNI(int arr[], int n, int std){
    int a;
    int mid=n/2;
    if(std<arr[n-1]){
        if(std>arr[mid]){
            {
            for(int i=mid;i<n;i++){
                if(std==arr[i]){
                    return i;
                }
            }
            }
        }
        else{
            for(int i=0;i<mid;i++){
                if(std==arr[i]){
                    return i;
                }
            }
        }
    }
    else{
        return -1;}
}
int main(){
    int arr[]={0,1,2,3,4,5};
    int n=6;
    cout<<BNI(arr,n,4);
    return 0;
}