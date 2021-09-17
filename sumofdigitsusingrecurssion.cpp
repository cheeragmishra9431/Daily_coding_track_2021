#include<iostream>
using namespace std;
int sodur(int n, int k=0){
    if(n==0){
        return k;
    }
    sodur(n/10, k=n%10+k);

}
int main(){
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;
    cout<<sodur(a);
    return 0;
}    