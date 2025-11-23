// Program 20 - BFS DFS
// Author: Namish (Roll 241478)

#include <iostream>
#include <queue>
using namespace std;

void BFS(int g[][10], int n, int start) {
    int vis[10] = {0};
    queue<int> q;

    vis[start] = 1;
    q.push(start);

    cout << "BFS: ";
    while (!q.empty()) {
        int v = q.front(); q.pop();
        cout << v << " ";

        for (int i=0;i<n;i++) {
            if (g[v][i] && !vis[i]) {
                vis[i] = 1;
                q.push(i);
            }
        }
    }
    cout << "\n";
}

void DFSUtil(int g[][10], int v, int vis[], int n) {
    vis[v] = 1;
    cout << v << " ";
    for (int i=0;i<n;i++) {
        if (g[v][i] && !vis[i]) DFSUtil(g, i, vis, n);
    }
}

void DFS(int g[][10], int n, int start) {
    int vis[10] = {0};
    cout << "DFS: ";
    DFSUtil(g, start, vis, n);
    cout << "\n";
}

int main() {
    int n = 5;
    int g[10][10] = {
        {0,1,1,0,0},
        {1,0,1,1,0},
        {1,1,0,1,1},
        {0,1,1,0,1},
        {0,0,1,1,0}
    };

    BFS(g, n, 0);
    DFS(g, n, 0);

    return 0;
}
