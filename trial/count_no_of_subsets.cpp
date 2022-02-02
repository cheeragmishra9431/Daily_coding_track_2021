#include<iostream>
using namespace std;
int cos(int arr[], int n, int sum){
    if(sum==0){
        return 1;
    }
    if(n==0){
        return 0;
    }
    int res=cos(arr,n-1,sum);
    if(arr[n-1]<=sum){
        res+=cos(arr,n-1,sum-arr[n-1]);
    }
    return res;
}
int main(){
//code;
int arr[4]={2,4,7,3};
cout<<cos(arr,4,7);
return 0;
}