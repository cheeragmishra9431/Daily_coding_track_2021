#include<iostream>
using namespace std;
const int r=4;
const int c=4;
void boundary(int arr[r][c]){
    
    for(int j=0;j<c;j++){
        cout<<arr[0][j]<<endl;
    }
    
    for(int i=1;i<r;i++){
        cout<<arr[i][c-1]<<endl;
    }
    
    for(int j=c-2;j>=0;j--){
        cout<<arr[r-1][j]<<endl;
    }
    
    for(int i=r-1;i>=0;i--){
        cout<<arr[i][0]<<endl;
    }


}
int main(){
//code;  
 int arr[r][c]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    boundary(arr);
return 0;
}