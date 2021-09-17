#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int r = 4;
const int c = 4;
void r90A(int arr[r][c])
{
    int temp[c][r];
    for (int i = 0; i < r; i++)
    {
        int x=c-1;
        
        for (int j = 0; j < c; j++)
        {
            temp[x][i]=arr[i][j];
            x--;
        }
       
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << temp[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    //code;
    int arr[r][c]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    r90A(arr);
    return 0;
}