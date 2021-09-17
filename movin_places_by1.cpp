#include<iostream>
using namespace std;
int mpd(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int temp= arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    return n;
}
int main(){
    int n=5, as[]={1,3,2,4,5};
    n=mpd(as,n);
    for(int i=0; i<n; i++){
        cout<<as[i];
    }
    return 0;
}

