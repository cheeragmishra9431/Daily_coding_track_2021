#include <iostream>
using namespace std;
const int r = 4;
const int c = 4;
void boundary(int arr[r][c])
{
    while ((r > 0) & (c > 0))
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[0][j] << endl;
        }

        for (int i = 1; i < r; i++)
        {
            cout << arr[i][c - 1] << endl;
        }

        for (int j = c - 2; j >= 0; j--)
        {
            cout << arr[r - 1][j] << endl;
        }

        for (int i = r - 1; i >= 1; i--)
        {
            cout << arr[i][0] << endl;
        }
    }

    void spiral(int arr[r][c])
    {
    }
    int main()
    {
        //code;
        return 0;
    }