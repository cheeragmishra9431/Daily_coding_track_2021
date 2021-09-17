#include<iostream>
using namespace std;
int main(){
//code;
int x=8;
int*p;
p=&x;
cout<<p<<endl;
cout<<*p<<endl;
*p++;
// int &p=  x;

cout<<x<<endl;
cout<<&p<<x<<endl;
cout<<*p<<endl;
return 0;
}