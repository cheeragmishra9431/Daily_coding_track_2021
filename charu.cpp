#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// int maxGuest(int arr[],int dep[],int n)  
// {  
//     sort(arr, arr+n);
//     sort(dep, dep+n);
    
//     int i=1,j=0,res=1,curr=1;
//     while(i<n && j<n){
//         if(arr[i]<dep[j]){
//             curr++;i++;
//         }
//         else{
//             curr--;j++;
//         }
//         res=max(curr,res);
//     }
//    return res;
// } 
bool myCmp(pair <int, int> a, pair <int, int> b)
{
	return (a.second < b.second);
}

int maxActivities(pair <int, int> arr[], int n)
{
	sort(arr, arr + n, myCmp);

	int prev = 0;
	int res = 1;

	for(int curr = 1; curr < n; curr++)
	{
	 
		if(arr[curr].first >= arr[prev].second)
		{
			res++;

			prev = curr;
		}
	}

	return res;
}
int main(){
//code;
int t;
cin>>t;
// int arr[t];
// int dep[t];
// for (int i = 0; i < t; i++)
// {
//     /* code */
//     cin>>arr[i];
//     cin>>dep[i];
// }
pair<int, int> arr[t];
for(int i=0; i<t; i++){
    cin>>arr[i].first;
    cin>>arr[i].second;
}
cout<<maxActivities(arr, t); 
// cout<<maxGuest(arr,dep, t);



return 0;
}