// CPP program to implement traveling salesman
// problem using naive approach.
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main() {
  // matrix representation of graph
  int N;
  cin >> N;
  int graph[N][N];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> graph[i][j];
    }
  }
  int s = 0;
  vector<int> vertex;
  for (int i = 0; i < N; i++)
    if (i != s) vertex.push_back(i);

  // store minimum weight Hamiltonian Cycle.
  int min_path = INT_MAX;
  do {
    // store current Path weight(cost)
    int current_pathweight = 0;

    // compute current path weight
    int k = s;
    for (int i = 0; i < vertex.size(); i++) {
      current_pathweight += graph[k][vertex[i]];
      k = vertex[i];
    }
    current_pathweight += graph[k][s];

    // update minimum
    min_path = min(min_path, current_pathweight);

  } while (next_permutation(vertex.begin(), vertex.end()));

  cout << min_path << endl;
}
