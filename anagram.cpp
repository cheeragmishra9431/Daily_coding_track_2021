#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int n)
{
    int sum = 0; // initialize sum
 
    // Iterate through all elements
    // and add them to sum
    for (int i = 0; i < n; i++)
    sum += arr[i];
 
    return sum;
}
bool anagram(string s1, string s2)
{
    int alpa[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        alpa[s1[i] - 'a'] = +1;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        alpa[s1[i] - 'a'] = -1;
    }
    if(sum(alpa, 26)==0){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    string s2 = "abcdefgh";
    string s1 = "de";
    cout << anagram(s1, s2);
    //code;
    return 0;
}