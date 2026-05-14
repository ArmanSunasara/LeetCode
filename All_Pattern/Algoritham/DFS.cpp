#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void dfs(int node, vector<int> adj[], vector<int>& vis, vector<int>& ls)
{
    vis[node] =1;
    ls.push_back(node);

    for(auto it : adj[node])
    {
        if(!vis[it])
        {
            dfs(it, adj, vis, ls);
        }
    }

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

    vector<int> vis(v, 0);
    int start =0;
    vector<int>ls;

    // Call DFS
    dfs(start, adj, vis, ls);

    // Print the result
    cout << "DFS Traversal: ";
    for (int node : ls)
    {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}