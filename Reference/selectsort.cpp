#include <iostream>
using namespace std;

void swap(int& num1SS, int& num2SS) {
    int temp = num1SS;
    num1SS = num2SS;
    num2SS = temp;
}

void selectionSort(int arraySS[], int arraySize) {
    for (int indexA = 0; indexA < arraySize - 1; ++indexA) {
        // Find the minimum element in the unsorted part
        int minIndex = indexA;
        for (int j = indexA + 1; j < arraySize; ++j) {
            if (arraySS[j] < arraySS[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(arraySS[indexA], arraySS[minIndex]);

        // Print the array at this step
        cout << "Step " << indexA + 1 << ": ";
        for (int k = 0; k < arraySize; ++k) {
            cout << arraySS[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arraySS[] = {64, 25, 12, 22, 11, 1, 7,19, 32,22,11};
    int arraySize = sizeof(arraySS) / sizeof(arraySS[0]);

    cout << "Original array: ";
    for (int indexA = 0; indexA < arraySize; ++indexA) {
        cout << arraySS[indexA] << " ";
    }
    cout << endl;

    selectionSort(arraySS, arraySize);

    cout << "Sorted array: ";
    for (int indexA = 0; indexA < arraySize; ++indexA) {
        cout << arraySS[indexA] << " ";
    }
    cout << endl;

    return 0;
}

