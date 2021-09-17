#include<iostream>
using namespace std;
void toh(int n, char A, char B, char C){
    if(n>0){
        toh(n-1, A,C,B);
        cout<<"move "<< n<<" disc from "<<A<<" to "<<C<<endl;
        toh(n-1, B,A,C);
    }
}
int main(){
//code;
toh(3,'A','B','C');
return 0;
}