#include<iostream>
using namespace std;
struct mystack
{
    int top, cap;
    int *arr;
    mystack(int x){
        cap= x;
        arr=new int[cap];
        top=-1;
    }
    void push(int x){
        if(top==cap+1){ return ;}
        top++;
        arr[top]=x;

    }
    int pop(){
        if( top==-1){
            return -1;
        }
        int res=arr[top];
        top--;
        return res;
    }
    int peek(){
        return arr[top];

    }
     int size(){
         return top+1;

     }
     bool isempty(){
         if(top==-1){
             return true;
         }
     }
};

int main(){
//code;
mystack s(5);
s.push(1);
s.push(2);
s.push(3);
s.push(4);
cout<<s.pop()<<endl;
cout<<s.peek();
return 0;
}