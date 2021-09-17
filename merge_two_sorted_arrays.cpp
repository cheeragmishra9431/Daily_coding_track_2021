#include<iostream>
using namespace std;
void m_t_s_a(int a1[], int a2[], int m, int n){
    int res[m+n];
    int x=0,y=0;
    for(int i=0; i<m+n;i++){
        if(a1[x]>a2[y]){
            res[i]=a2[y];
            y++;
        }
        else{
            res[i]=a1[x];
            x++;
        }
    }
    for(int i=0; i<m+n;i++){
        cout<<res[i];
    }

}
int main(){
//code;
    int a[]={2,3,4,5,6};
    int b[]={4,5,6,7,8,9};
    m_t_s_a(a,b,5,6);
    return 0;
}