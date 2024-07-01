//? Source: https://leetcode.com/problems/set-matrix-zeroes/

import java.util.ArrayList;

public class SetMatrixZeros {

    public void setZeroes(int[][] matrix) {
        ArrayList<Integer> cols = new ArrayList();
        ArrayList<Integer> rows = new ArrayList();
        for (int row = 0; row < matrix.length; row++) {
            for (int col = 0; col < matrix[row].length; col++) {
                if (matrix[row][col] == 0) {
                    cols.add(col);
                    rows.add(row);
                }
            }
        }
        while (!rows.isEmpty()) { 
            setRowsZero(matrix, rows.remove(0));
        }
        while (!cols.isEmpty()) { 
            setColsZero(matrix, cols.remove(0));
        }
    }

    public void setRowsZero(int[][] mat, int row) {
        for (int col = 0; col < mat[row].length; col++) {
            mat[row][col] = 0;
        }
    }

    public void setColsZero(int[][] mat, int col) {
        for (int[] row : mat) {
            row[col] = 0;
        }
    }

    public static void printMatrix(int[][] mat) {
        for (int[] mat1 : mat) {
            for (int j = 0; j < mat1.length; j++) {
                System.out.print(mat1[j] + " ");
            }
            System.out.println("");
        }
    }

    public static void main(String[] args) {
        SetMatrixZeros test = new SetMatrixZeros();
        int[][] mat = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
        test.setZeroes(mat);
        printMatrix(mat);
    }
}
