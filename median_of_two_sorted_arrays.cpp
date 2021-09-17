#include<iostream>
#include<algorithm>
using namespace std;
int mtsa(int a1[], int a2[], int n1, int n2){
    int begin1 = 0, end1 = n1;
    int i1=(begin1+end1)/2;
    int i2=(n1 + n2 + 1) / 2 - i1;
    int min1=i1;
    int min2=i2;
    int max1;
    if(i1==0){
        max1=min1;
    }
    else{
        max1=min1-1;
    }
    int max2=min2-1;
    while(true){
        
        
        if( (a1[max1] >=a2[min2]) && (a1[min1]>= a2[max2])){
            if((n2+n1)/2==0){
                return (max(max1, max2)+min(min1, min2))/2;
            }
            else {
                return max(max1, max2);
            }
        }
        else if((a1[max1] >=a2[min2]) | (a1[min1]<= a2[max2])){
            if(a1[max1] >=a2[min2]){
                
            }
            else{

            }
        }

    }
}
int main(){
//code;
    return 0;
}