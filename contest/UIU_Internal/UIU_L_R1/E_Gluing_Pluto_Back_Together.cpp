//! Bismillah

/*
? Problem Source -> https://codeforces.com/gym/104261/problem/E
*/

#include "bits/stdc++.h"
using namespace std;

void solve() {
  int N;
  cin >> N;
  int graph[N][N];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> graph[i][j];
    }
  }

  int starter = 0;
  vector<int> o_vertex;
  for (int i = 0; i < N; i++) {
    if (i != starter) o_vertex.push_back(i);
  }

  int min_cost = INT32_MAX;

  do {
    int cp_cost = 0, t_start = starter;

    for (int i = 0; i < o_vertex.size(); i++) {
      cp_cost += graph[t_start][o_vertex[i]];
      t_start = o_vertex[i];
    }
    cp_cost += graph[t_start][starter];
    min_cost = min(min_cost, cp_cost);

  } while (next_permutation(o_vertex.begin(), o_vertex.end()));

  cout << min_cost << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  solve();
}