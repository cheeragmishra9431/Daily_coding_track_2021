#include<iostream>
using namespace std;
int nnr(int n, int k){
    if(n==0){
        return k;
    }
    nnr(n-1,k+n);
}
int main(){
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;
    cout<<nnr(a,0);
    return 0;
}