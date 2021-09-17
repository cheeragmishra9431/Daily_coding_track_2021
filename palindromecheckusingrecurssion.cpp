#include<iostream>
using namespace std;
bool pcur(string a, int strt,int ed){
    if(strt>= ed){
        return true;
    }
    return (a[strt]==a[ed] && pcur(a, strt+1, ed-1));
}
int main(){
    string sa;
    cin>> sa;
    cout<<pcur(sa,0, sa.length()-1);
    return 0;
}