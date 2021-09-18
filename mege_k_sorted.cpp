#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct ppi
{
// The element to be stored
    int element;
 
// index of the array from which the element is taken
    int i;
 
// index of the next element to be picked from the array
    int j;
};
class Solution
{
    public:
    //Function to merge k sorted arrays
    
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code herep
        priority_queue<ppi, vector<ppi>, greater<ppi> > queue;
        for (int i = 0; i < arr.size(); i++){
            ppi temp;
            temp.element=arr[i][0];
            temp.i=i;
            temp.j=0;
            queue.push(temp);
        }
        while (queue.empty()==false)
        {
            /* code */
            auto temp=queue.top();
            int arr_index=temp.i;
            int arr_element_index=temp.j;
            queue.pop();
            ppi new1;
            new1.i=arr_index;
            if(arr_element_index<arr[arr_index].size()){
                new1.j=arr_element_index+1;
            }
            queue.push({});
        }
        
    
    }
};
int main(){
//code;
return 0;
}