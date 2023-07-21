//! Bismillah

/*
? Problem Source -> https://codeforces.com/gym/100685/problem/I
*/

#include "bits/stdc++.h"
using namespace std;

typedef int64_t lls;
typedef uint64_t llu;

void solve() {
  // From here
  int road_width, road_length, tile_width, tile_length;
  cin >> road_width >> road_length;
  cin >> tile_width >> tile_length;

  // int t_road_len = road_length, t_road_wid = road_width;

  int need_width = 0, need_length = 0;

  need_length = road_length / tile_length;
  road_length %= tile_length;

  need_width = road_width / tile_width;
  road_width %= tile_width;

  // road_length *= ;
  // need_length += road_length / tile_length;

  // road_width *= ;
  // need_width += road_width / tile_width;
  cout << need_width << " " << need_length << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  solve();
}
