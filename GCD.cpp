#include<iostream>
using namespace std;
int gcd(int a, int b){
    int G;
    if(a>b){
        G==b;
    }
    else G==a;
    while(G>0){
        if(a%G==0 && b%G==0){
            break;
        }
        G--;
    }
    return G;
}
int gcd1(int a,int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int main(){
    int X, Y;
    cout<<"enter the number"<<endl;
    cin>>X>>Y;
    cout<< gcd(X, Y)<<endl;
    cout<< gcd1(X, Y);
}