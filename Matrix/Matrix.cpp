#include <iostream>
using namespace std;

int main() {
    int arr1[4][3];
    int count_non_zero = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            arr1[i][j] = rand() % 21 - 10;
            if (arr1[i][j] != 0) count_non_zero++;
        }
    }
    cout << "task1: " << count_non_zero << endl;
    int arr2[3][3];
    int count_zero = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr2[i][j] = rand() % 21 - 10;
            if (arr2[i][j] == 0) count_zero++;
        }
    }
    cout << "task2: " << count_zero << endl;

    int arr3[7][3];
    int count_abs_less_than_12 = 0;
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 3; j++) {
            arr3[i][j] = rand() % 40 - 20;
            if (arr3[i][j] > -12 && arr3[i][j] < 12) count_abs_less_than_12++;
        }
    }
    cout << "task3: " << count_abs_less_than_12 << endl;

    int arr4[4][5];
    int count_positive = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            arr4[i][j] = rand() % 21 - 10;
            if (arr4[i][j] > 0) count_positive++;
        }
    }
    cout << "task4: " << count_positive << endl;
    int arr5[5][4];
    int product_positive = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            arr5[i][j] = rand() % 21 - 10;
            if (arr5[i][j] > 0) product_positive *= arr5[i][j];
        }
    }
    cout << "task5: " << product_positive << endl;

    int product_negative = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            arr5[i][j] = rand() % 21 - 10;
            if (arr5[i][j] < 0) product_negative *= arr5[i][j];
        }
    }
    cout << "task6: " << product_negative << endl;

    int arr6[4][4];
    int count_remainder_1 = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            arr6[i][j] = rand() % 100 + 1;
            if (arr6[i][j] % 6 == 1) count_remainder_1++;
        }
    }
    cout << "task7: " << count_remainder_1 << endl;
    int arr7[5][6];
    int min_element = arr7[0][0];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            arr7[i][j] = rand() % 21 - 10;
            if (arr7[i][j] < min_element) min_element = arr7[i][j];
        }
    }
    cout << "task8: " << min_element << endl;

    int max_element = arr7[0][0];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            arr7[i][j] = rand() % 21 - 10;
            if (arr7[i][j] > max_element) max_element = arr7[i][j];
        }
    }
    cout << "tsk9: " << max_element << endl;

    int sum_negative = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            arr5[i][j] = rand() % 21 - 10;
            if (arr5[i][j] < 0) sum_negative += arr5[i][j];
        }
    }
    cout << "task10:  " << sum_negative << endl;
}
