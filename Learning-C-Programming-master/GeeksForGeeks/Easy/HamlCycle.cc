#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

bool dfs(vector<int> *edges, int N, bool *vis, int s) {
  if (vis[s])
    return false;
  vis[s] = true;
  bool allVisited = true;
  for (int i = 0; i < N; i++)
    if (!vis[i])
      allVisited = false;
  if (allVisited) {
    // for(int i=0; i<edges[s].size(); i++){
    //    if (edges[s][i] == 0) return true;
    //}
    // vis[s] = false;
    // return false;

    return true;
  }
  for (int i = 0; i < edges[s].size(); i++) {
    if (dfs(edges, N, vis, edges[s][i]))
      return true;
  }
  vis[s] = false;
  return false;
}

bool solve(vector<int> *edge, int N) {
  if (N == 1)
    return true;
  bool *vis = new bool[N];
  for (int i = 0; i < N; i++) {
    memset(vis, false, sizeof(bool) * N);
    if (dfs(edge, N, vis, i))
      return true;
  }
  return false;
}

int main() {
  // code
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int N, E;
    cin >> N >> E;
    vector<int> *edge = new vector<int>[N];
    for (int j = 0; j < E; j++) {
      int a, b;
      cin >> a >> b;
      edge[a - 1].push_back(b - 1);
      edge[b - 1].push_back(a - 1);
    }
    if (solve(edge, N))
      cout << 1 << endl;
    else
      cout << 0 << endl;
  }
  return 0;
}