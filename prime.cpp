#include<iostream>
using namespace std;
bool prime(int n){
    if(n==2 || n==3){
        return true;

    }
    else if(n%2==0 || n%3==0){
        return false;
    }
    else{
        for(int i=5; i*i<=n; i=i+6){
            if(n%i==0||n%(i+2)==0){return false;}
        }
        return true;
    }
}
int main(){
    int a;
    cout<<"enter a  number"<<endl;
    cin>> a;
    cout<<prime(a);
    return 0;
}