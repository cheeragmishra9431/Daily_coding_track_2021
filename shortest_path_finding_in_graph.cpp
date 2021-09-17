#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void spg(std::vector<int> ad[], int v, int s)
{
    int diff[v] = {0};
    bool visited[v] = {false};
    queue<int> q;
    q.push(s);
    visited[s] = 0;
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        for (int i : ad[u])
        {
            if (visited[i] == false)
            {
                diff[i] = diff[u] + 1;
                visited[i] = true;
                q.push(i);
            }
        }
    }
}
int main()
{
    //code;
    vector<int> ad[2];
    
    return 0;
}