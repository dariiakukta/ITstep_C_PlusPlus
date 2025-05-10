#include <iostream>
using namespace std;

int** AddRow(int** arr, int& row, int col) {
    int** temp = new int* [row + 1];
    temp[0] = new int[col];
    for (int i = 0; i < col; i++) {
        temp[0][i] = 0;
    }
    for (int i = 0; i < row; i++) {
        temp[i + 1] = arr[i];
    }
    delete[] arr;
    row++;
    return temp;
}

int** DeleteFirstRow(int** arr, int& row) {
    if (row == 0) return arr;
    int** temp = new int* [row - 1];
    for (int i = 1; i < row; i++) {
        temp[i - 1] = arr[i];
    }
    delete[] arr[0];
    delete[] arr;
    row--;
    return temp;
}

int** DeleteRowAtPosition(int** arr, int& row, int col, int pos) {
    if (pos < 0 || pos >= row) return arr;
    int** temp = new int* [row - 1];
    for (int i = 0; i < pos; i++) {
        temp[i] = arr[i];
    }
    for (int i = pos + 1; i < row; i++) {
        temp[i - 1] = arr[i];
    }
    delete[] arr[pos];
    delete[] arr;
    row--;
    return temp;
}

int** AddColumn(int** arr, int& row, int& col, int pos) {
    if (pos < 0 || pos > col) return arr;
    int** temp = new int* [row];
    for (int i = 0; i < row; i++) {
        temp[i] = new int[col + 1];
    }
    for (int i = 0; i < row; i++) {
        for (int n = 0; n < pos; n++) {
            temp[i][n] = arr[i][n];
        }
        temp[i][pos] = 0;
        for (int n = pos + 1; n < col + 1; n++) {
            temp[i][n] = arr[i][n - 1];
        }
    }
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    col++;
    return temp;
}

int** AddColumnAtStart(int** arr, int& row, int& col) {
    int** temp = new int* [row];
    for (int i = 0; i < row; i++) {
        temp[i] = new int[col + 1];
    }
    for (int i = 0; i < row; i++) {
        temp[i][0] = 0;
        for (int n = 0; n < col; n++) {
            temp[i][n + 1] = arr[i][n];
        }
    }
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    col++;
    return temp;
}

int** Fill(int** arr, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int n = 0; n < col; n++) {
            arr[i][n] = i * col + n + 1;
        }
    }
    return arr;
}

int** PrintArray(int** arr, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int n = 0; n < col; n++) {
            cout << arr[i][n] << " ";
        }
        cout << endl;
    }
    return arr;
}

int main() {
    int rows = 5;
    int cols = 7;
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    Fill(arr, rows, cols);

    cout << "array:" << endl;
    PrintArray(arr, rows, cols);
    return 0;
}
