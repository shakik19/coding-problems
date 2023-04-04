/*
! Write a program that will take two pxn and nxq matrix as input
! and perform dot product among them. Then store it into another
! matrix and print it.
! i.  Use recursion to perform dot profuct
! ii. Use pointer.
*/
#include "stdio.h"

int p, n, nn, q;

void mat_ip(int mat[][n], int r, int c, int i, int j) {
  if (r - 1 == i && c - 1 == j) {
    return;
  } else {
    int val;
    scanf("%i", &val);
    mat[i][j] = val;
  }
}

int dot_product(int mat1[][], int mat2[][], int product[][], int i, int j,
                int ii, int jj) {}

int main() {
  printf("Enter matrix size (P*N & N*Q): ");
  // scanf("%i %i %i %i", &p, &n, &nn, &q);
  int mat1[p][n], mat2[n][q], product[p][q];
  //! Using mat_ip func to take matrix ip using pointer
  mat_ip(mat1, p, n, 0, 0);
  mat_ip(mat2, n, q, 0, 0);
}