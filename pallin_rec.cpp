#include<iostream>
using namespace std;
int res(int n, int k){
        if(n==0){
            return k;
        }
        k=(n%10)+k;
        return res(n/10, k);
    }
bool palindrome(int n){
    int k=0;
    int res(int n, int k);
    int result=res(n,k);
    if(result==n){
        return true;
    }
    else{
        return false;
    }
}
int main(){
//code;
// cout<<palindrome(11);
cout<<res(134,0);
return 0;
}