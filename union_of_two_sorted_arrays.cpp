#include<iostream>
using namespace std;
///'''make another array and then check each and every element that you iterate through'''
void union_of_2_arrays(int ar1[], int ar2[], int m, int n){
    int i=0, j=0, k=m+n, ar3[k];
    while(i<m & j<n){
        if((ar1[i]==ar1[i-1]) & (i>0)){
            i++;
            continue;
        }
        if(ar1[i]>ar2[j]){
            cout<<ar2[j]<<endl;
            j++;
        }
        if(ar2[j]>ar1[i]){
            cout<<ar1[i]<<endl;
            i++;
        
        }
        if(ar1[i]==ar2[j]){
            cout<< ar1[i]<<endl;
            i++;
            j++;
        }
        while (i<m)
        {
            cout<<ar1[i]<<endl;
            i++;
        }
        while (j<n)
        {
            cout<< ar2[j]<<endl;
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
    union_of_2_arrays(ar1,ar2,n,m);
    
return 0;
}