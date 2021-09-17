#include<iostream>
using namespace std;
int ft(int x){
   int res=1;
   for(int i=2; i<=x; i++){
       res=res*i;
   }
   return res;
}
int ft2(int x){
    if(x==0){
        return 1;
    }
    return x*ft2(x-1);
    
}
int ft3(int x){
    int b=ft2(x);
    int h=0;
    while(b%10==0){
        h++;
        b=b/10;
    }
    return h;
    
}
int ft4(int x){
    int a=0;
    for (int i=5;i<= x; i=i*5){
        a= a +(x/i);
    }
    return a;
}
int main(){
    int a;
    cout<<"enter the number";
    cin>>a;
    cout<<ft(a)<<endl;
    cout<<ft2(a)<<endl;
    cout<<ft3(a)<<endl;
    cout<<ft4(a)<<endl;
    return 0;
}