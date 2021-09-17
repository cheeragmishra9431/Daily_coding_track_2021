#include <iostream>

#include <bits/stdc++.h>
using namespace std;
const int r = 4;
const int c = 4;
void transpose(int arr[r][c])
{
    for (int i = 0; i < c; i++)
    {
        for (int j = 1; j < c; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[r][c]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    transpose(arr);
    //code;
    return 0;
}