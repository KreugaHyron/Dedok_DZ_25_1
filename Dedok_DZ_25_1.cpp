#include <iostream>
using namespace std;
//функция к заданию 5
void countNumbers(int* arr, int size, int* positive, int* negative, int* zero) {
    *positive = 0;
    *negative = 0;
    *zero = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            (*positive)++;
        }
        else if (arr[i] < 0) {
            (*negative)++;
        }
        else {
            (*zero)++;
        }
    }
}
//функция к заданию 6
void findMax(int* arr_1, int size_1, int* maxIndex, int* maxValue) {
    *maxIndex = 0;
    *maxValue = arr_1[0];

    for (int i = 1; i < size_1; i++) {
        if (arr_1[i] > *maxValue) {
            *maxIndex = i;
            *maxValue = arr_1[i];
        }
    }
}
int main()
{
    setlocale(LC_ALL, "RUS");
    //Task_5
    const int SIZE = 7;
    int arr[SIZE] = { 1, -2, 0, 3, -4, 0, 5 };

    int positive = 0, negative = 0, zero = 0;
    countNumbers(arr, SIZE, &positive, &negative, &zero);

    cout << "Количество положительных элементов: " << positive << "\n";
    cout << "Количество отрицательных элементов: " << negative << "\n";
    cout << "Количество нулевых элементов: " << zero << "\n";
    cout << "\n";
    //Task_6
    const int SIZE_1 = 7;
    int arr_1[SIZE_1] = { 4, 7, 1, 9, 3, 6, 8 };

    int maxIndex, maxValue;
    findMax(arr_1, SIZE_1, &maxIndex, &maxValue);

    cout << "Индекс максимального элемента: " << maxIndex << "\n";
    cout << "Значение максимального элемента: " << maxValue << "\n";
}

