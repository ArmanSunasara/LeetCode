#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> bfs(int v , vector<int> adj[])
{
    vector<int> vis(v, 0);
    vis[0]=1;
    queue<int> q;
    q.push(0);
    vector<int> bfs;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it : adj[node])
        {
            if(!vis[it])
            {
                vis[it]=1;
                q.push(it);
            }
        }
    }
    return bfs;
}

int main()
{
    int v = 5;
    vector<int> adj[5];

    // Example graph:
    // 0 - 1
    // |   |
    // 2 - 3
    //  \
    //   4
    
    // Add edges (undirected graph)
    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 3, 4};
    adj[3] = {1, 2};
    adj[4] = {2};

    // Call BFS
    vector<int> result = bfs(v, adj);

    // Print the result
    cout << "BFS Traversal: ";
    for (int node : result)
    {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}