#include<iostream>
using namespace std;
int getFirstSetBit(int n){
    int res=1;
    if(n==0){
        return 0;
    }
    while(n>0){
        if((n&1)==1){
            
            break;
        }
        else{
            res++;
            n=n>>1;

            
        }
    }    
    return res;    
    
}
int main(){
int a;
cout<<"enter a number"<<endl;
cin>>a;
cout<<getFirstSetBit(a);
return 0;
}