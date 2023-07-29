 
#include <iostream>
using namespace std;

void quickSort(int arr[],int left,int right) {
    if (left >= right)
        return;
    int pivot = arr[(left+right)/2];
    int i = left;
    int j = right;
    
    while (i<=j) {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }


    }
    quickSort(arr,left,j);
    quickSort(arr, i, right);
}

void print(int arr[],int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {99,15,55,30,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr,0,n-1);
    print(arr,n);
}

 

 