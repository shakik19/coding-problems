//? Source: https://leetcode.com/problems/spiral-matrix/

class Solution {
 public:
  vector<int> spiralOrder(vector<vector<int>>& mat) {
    int r = mat.size();
    int c = mat[0].size();

    vector<int> arr(r * c);
    int pos = 0;

    int topR = 0, bottomR = r - 1, leftC = 0, rightC = c - 1;
    while (topR <= bottomR && leftC <= rightC) {
      for (int i = leftC; i <= rightC; i++, pos++) {
        arr[pos] = mat[topR][i];
      }
      topR++;

      for (int i = topR; i <= bottomR; i++, pos++) {
        arr[pos] = mat[i][rightC];
      }
      rightC--;

      if (topR <= bottomR) {
        for (int i = rightC; i >= leftC; i--, pos++) {
          arr[pos] = mat[bottomR][i];
        }
        bottomR--;
      }

      if (leftC <= rightC) {
        for (int i = bottomR; i >= topR; i--, pos++) {
          arr[pos] = mat[i][leftC];
        }
        leftC++;
      }
    }

    return arr;
  }
};