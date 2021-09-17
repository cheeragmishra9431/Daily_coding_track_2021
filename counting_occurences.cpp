#include<iostream>
using namespace std;
int co(int arr[], int n, int x){
    int low = 0, high = n - 1;

	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(x > arr[mid])
			low = mid + 1;

		else if(x < arr[mid])
			high = mid - 1;
        else{
            if(arr[mid]==x){
                
            }
        }    
}
int main(){
//code;
return 0;
}