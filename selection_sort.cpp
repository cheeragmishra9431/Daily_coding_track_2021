#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n){
    for(int i=0; i<n-1;i++ ){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
        
    }
    for(int i=0; i<n;i++){
        cout<<arr[i];
    }
}
int main(){
//code;
    int gh[]={7,8,4,3,6,1,2};
    selection_sort(gh,7);
    return 0;
}