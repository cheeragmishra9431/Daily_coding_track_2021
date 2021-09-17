#include<iostream>
using namespace std;
int bka(int a){
    int res=0;
    while(a>0){
        a=a&(a-1);
        res++;
    }
    return res;
}
int main(){
    int x=3;
    cout<<bka(x)<<endl;
    return 0;
}