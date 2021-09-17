#include<iostream>
using namespace std;
bool insorted(int arr[], int n){
    for(int i=0; i<n-2; i++){
        if(arr[i+1]<arr[i]){
            return false;
            }
    }
    return true;
}
int main(){
    int n=7, asd[]={3,4,6,7,8,9};
    cout<<insorted(asd,n)<<endl;
    return 0;
}