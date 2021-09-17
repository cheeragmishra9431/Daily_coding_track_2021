#include<iostream>
using namespace std;

int mbdp(int arr[], int n, int d){
    int res=0;
    int i=d;
    while(res!=i){
         int temp= arr[i];
        arr[i]=arr[res];
        arr[res]=temp;
        if(i<n){
            i++;
        }
        if(res<n){
            res++;

        }
        
    }
    return n;

}
int main(){
    int n=6, d=2, ayt[]={1,4,3,2,5,6};
    n=mbdp(ayt, n,d);
    for(int j=0;j<n;j++){
        cout<<ayt[j];
    }
    
    return 0;

}