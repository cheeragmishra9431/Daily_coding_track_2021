#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n){
    int key=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[key]){
            for(int j=i;j>0;j--){
                if(arr[j-1]>arr[j]){
                    swap(arr[j-1],arr[j]);
                }
            }
            key++;
        }
        else{
            key++;
        }
    }
    for(int i=0; i<n;i++){
        cout<<arr[i];
    }
}
int main(){
//code;
    int gh[]={7,8,4,3,6,1,2};
    insertion_sort(gh,7);
    return 0;
}