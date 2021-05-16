#include<iostream>
#include<string.h>
using namespace std;
bool pallindrome(string str){
    int begin=0;
    int end= str.length()-1;
    while(begin<end){
        if(str[begin]!=str[end]){
            return false;
        }
        else{
            begin++;
            end--;
        }
    }
    return true;
}
int main(){
//code;
string str="aaaaaaa";
cout<<pallindrome(str);
return 0;
}
// #madesome changes
