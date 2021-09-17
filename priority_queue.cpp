#include<iostream>
#include<queue>
struct person
{
    int age;
    int ht;
    person(int a, int b){
        age=a;
        ht=b;
    }
    /* data */
};
struct cmp{

};
void maxheapify(int arr[], int n, int i){
    int lt=2*1+1;
    int rt=2*1+2;
    int largest=i;
    if((lt<n)&&(arr[lt]>arr[largest])){
        largest=lt;
    }
    
}
using namespace std;
int main(){
//code;
return 0;
}