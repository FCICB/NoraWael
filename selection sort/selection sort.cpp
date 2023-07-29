 
#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    int min;
    for (int i = 0; i <size; i++) {
        min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }

}

void print(int arr[],int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}


int main()
{
   int  arr[] = {20,35,10,25,5};
   int n = sizeof(arr) / sizeof(arr[0]);
   selectionSort(arr,n);
   print(arr,n);

}

 