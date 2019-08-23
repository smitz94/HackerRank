#include <bits/stdc++.h>

using namespace std;

class Graph {
  int V;

  list<int> *adj;

public:
  Graph(int V);

  void addEdge(int v, int w);

  void BFS(int arr[], int s);
};

Graph::Graph(int V) {
  this->V = V;
  adj = new list<int>[V];
}

void Graph::addEdge(int v, int w) {
  adj[v].push_back(w);
  adj[w].push_back(v); // undirected graph
}

void Graph::BFS(int arr[], int s) {
  bool *visited = new bool[V];
  for (int i = 0; i < V; i++) {
    visited[i] = false;
  }

  list<int> q;

  visited[s] = true;
  q.push_back(s);

  list<int>::iterator i;

  while (!q.empty()) {
    s = q.front();
    q.pop_front();

    for (i = adj[s].begin(); i != adj[s].end(); i++) {
      if (!visited[*i]) {
        visited[*i] = true;
        arr[*i] = arr[s] + 6;
        q.push_back(*i);
      }
    }
  }

  for (int i = 0; i < V; i++) {
    if (visited[i] == false) {
      arr[i] = -1;
    }
  }
}

int main() {
  int q;
  cin >> q;
  for (int j = 0; j < q; j++) {
    int n;
    cin >> n;
    Graph g(n);
    int m, v, w;
    cin >> m;

    for (int i = 0; i < m; i++) {
      cin >> v;
      cin >> w;
      g.addEdge(v - 1, w - 1);
    }

    int dis[n] = {0};
    int start;
    cin >> start;
    g.BFS(dis, start - 1);

    for (int i = 0; i < n; i++) {
      if (i != start - 1)
        cout << dis[i] << " ";
    }

    cout << "\n";
  }
}
