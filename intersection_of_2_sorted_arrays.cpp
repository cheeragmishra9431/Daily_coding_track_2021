#include<iostream>
using namespace std;
void intersectiom(int ar1[], int ar2[], int n, int m){
    int i=0, j=0;
    while((i<n) && (j<m)){
        if((ar1[i]==ar1[i-1]) & (i>0)){
            i++;
            continue;
        }
        if(ar1[i]>ar2[j]){
            j++;
        }
        if(ar2[j]>ar1[i]){
            i++;
        
        }
        if(ar1[i]==ar2[j]){
            cout<< ar1[i];
            i++;
            j++;
        }
    }
}
int main(){
    //code;
    int ar1[]={1,2,2,3,4,5};
    int n=6;
    int ar2[]={2,3,4,5,6};
    int m=5;
    intersectiom(ar1,ar2,n,m);
    return 0;
}