#include <iostream>
using namespace std;
bool sts(string s1, string s2)
{
    for (int i = 0; i < s1.length(); i++)
    {
        for (int j = 0; j < s2.length(); j++)
        {
            if (s1[i] == s2[j])
            {
                i++;
            }
            if ((i < s1.length()) & (j == s2.length() - 1))
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    //code;
    string s2 = "abcdefgh";
    string s1 = "de";
    cout << sts(s1, s2);
    return 0;
}