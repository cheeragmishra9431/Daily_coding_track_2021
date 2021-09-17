#include<iostream>
using namespace std;
void lm32bn(int n){
    int table[256];
    table[0]=0;
    for(int i=1; i<n;i++){
        table[i]=table[1&i]+table[i/2];
    }
    return table[n];
}
int main(){
//code;
    int gh[4]=lm32bn(4);
    for(int i=0;i<4;i++){
        cout<<gh[i];
    }
    return 0;
}