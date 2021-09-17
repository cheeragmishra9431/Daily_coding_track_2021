#include<iostream>
using namespace std;
int mzate(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i;j<n;j++){
                if(arr[j]!=0){
                    int temp= arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
        }
    }
    return n;
}
int main(){
    int n=5, ahy[]={3,0,5,6,7};
    n=mzate(ahy,n);

    for(int i=0;i<n;i++){
        cout<<ahy[i];
    }
    return 0;
}