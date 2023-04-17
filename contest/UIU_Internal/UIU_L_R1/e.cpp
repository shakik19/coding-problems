//! Bismillah
#include "bits/stdc++.h"
using namespace std;

#define lli long long int;
#define imx INT_MAX
#define imn INT_MIN
#define vi std::vector<int>
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define ANS cout << ans << endl

int main() {
  int N;
  cin >> N;
  int graph[N][N];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> graph[i][j];
    }
  }

  //! Held Karp
  int starter = 0;
  vi o_vertex;
  for (int i = 0; i < N; i++) {
    if (i != starter) o_vertex.push_back(i);
  }

  int min_cost = imx;

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