 
#include <iostream>
using namespace std;

void insertionSort(int arr[],int size) {
    int temp,j, i;
    for (i = 1; i < size; i++) {
        temp = arr[i];
        j = i- 1;
        while ( j >=0 && arr[j]>temp) {
            arr[j+1]=arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }

}

void print(int arr[],int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {99,15,55,30,10};
    int n = sizeof(arr) /sizeof(arr[0]);
    insertionSort(arr,n);
    print(arr,n);
     
}

 