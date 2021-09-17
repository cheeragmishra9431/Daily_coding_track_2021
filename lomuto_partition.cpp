#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int lomuto_partition(int arr[], int l, int h ){
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return (i+1);

}
int main(){
//code;
    int gh[]={7,8,4,3,6,1,2};
    cout<<lomuto_partition(gh,0,7);
return 0;
}