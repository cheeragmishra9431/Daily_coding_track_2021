#include<iostream>
using namespace std;

int get_second_largest(int arr[], int n){
        int hig=0;
        int hig2=0;
        for(int i=0;i<n;i++){
            if(arr[i]>hig){
                hig2=hig;
                hig=arr[i];
                
            }
            else if(arr[i]<hig && arr[i]>hig2){
                hig2=arr[i];
            }
        }
        return hig2;
    }
    
int main(){
    int n=5, alk[]={8,9,6,4,5};
    cout<<get_second_largest(alk,n);
    return 0;
}