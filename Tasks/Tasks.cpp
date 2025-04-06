#include <iostream>
#include <ctime>
using namespace std;

template <typename T>
int findElement(T arr[], const int size, T element)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == element)
            return i;
    }
    return -1;
}

template <typename T>
void sortArray(T arr[], const int size, bool desc = false)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if ((desc && arr[i] < arr[j]) || (!desc && arr[i] > arr[j]))
            {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    srand(time(nullptr));

    const int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE; ++i)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;

    int element = 35;
    int index = findElement(arr, SIZE, element);

    if (index != -1)
        cout << "Element " << element << " found at index: " << index << endl;
    else
        cout << "Element " << element << " not found." << endl;

    cout << "Sorting in ascending order:" << endl;
    sortArray(arr, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Sorting in descending order:" << endl;
    sortArray(arr, SIZE, true);

    for (int i = 0; i < SIZE; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
