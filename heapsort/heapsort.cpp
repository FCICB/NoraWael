 
#include <iostream>
using namespace std;

void heapify(int arr[],int low,int high)//rootnode,lastelement
{
    int largeIndex; //larger child
    int temp = arr[low];//rootnode
    largeIndex = 2 * low + 1;//left child
    while (largeIndex<=high) { //not out elements
        if (largeIndex < high && arr[largeIndex] < arr[largeIndex + 1]) //isn't lastelement,left<right
        {
            largeIndex = largeIndex + 1;
        }
        if (temp > arr[largeIndex])
            break;
        else {
            arr[low] = arr[largeIndex]; //swap
            low = largeIndex;
            largeIndex = 2 * low + 1;
        }
             

    }
    arr[low] = temp; //insert in maxheap

}

void buildHeap(int arr[],int n) {
    for (int index = n / 2 - 1; index >= 0; index--) //first step to indicate middle index
    {
        heapify(arr,index,n-1);
    }

}

void heapSort(int arr[],int n) {
    int temp;
    buildHeap(arr,n);
    for (int lastOutOfOrder = n - 1; lastOutOfOrder >= 0; lastOutOfOrder--) { //asc swap big root to the end
        temp = arr[lastOutOfOrder];
        arr[lastOutOfOrder] = arr[0];
        arr[0] = temp;
        heapify(arr,0,lastOutOfOrder-1); //restore heap
    }

}
void print(int arr[],int size){
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

}
int main()
{
    int arr[] = {99,15,55,30,10};
    int n =sizeof(arr) / sizeof(arr[0]);
    heapSort(arr,n);
    print(arr,n);

}

 