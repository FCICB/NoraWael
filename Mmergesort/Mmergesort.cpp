
#include <iostream>
using namespace std;

void divideArray(int arr[], int low, int high, int& middle) {
    middle = low + (high - low) / 2;
}

void mergeArray(int arr[], int low, int high, int middle) {
    int* temp = new int[high - low + 1];
    int leftIndex = low;
    int rightIndex = middle + 1;
    int tempIndex = 0;
    while (leftIndex <= middle && rightIndex <= high) {
        if (arr[leftIndex] < arr[rightIndex]) {
            temp[tempIndex] = arr[leftIndex];
            leftIndex++;
        }
        else
        {
            temp[tempIndex] = arr[rightIndex];
            rightIndex++;
        }
        tempIndex++;
    }

    while (leftIndex <= middle) {
        temp[tempIndex] = arr[leftIndex];
        leftIndex++;
        tempIndex++;
    }

    while (rightIndex <= high) {
        temp[tempIndex] = arr[rightIndex];
        rightIndex++;
        tempIndex++;

    }

    for (int i = 0; i < tempIndex; i++) {
        arr[low + i] = temp[i];
    }
    delete[] temp;
}

void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int middle;
        divideArray(arr, low, high, middle);
        mergeSort(arr, low, middle);
        mergeSort(arr, middle + 1, high);
        mergeArray(arr, low, high, middle);
    }


}


void print(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = { 10,5,50,30 };
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);
    print(arr, n);
     
    cin.get(); // Wait for a key press before closing the console
    return 0;
}

