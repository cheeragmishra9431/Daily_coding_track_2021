#include<iostream>
using namespace std;
void palin(int x){
    int rvnum=0;
    int temp=x;
    while(x>0){
        rvnum=rvnum*10 + x%10;
        x=x/10;
    }
    if(temp==rvnum){
        cout<<"it is a palindrome"<<endl;
    }    
    else{
        cout<<"it is not"<<endl;
    }    
    



}
int main(){
    int x;
    cout<< "enter the number";
    cin>>x;
    palin(x);
}