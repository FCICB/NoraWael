 
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int item) {
    int first = 0;
    int last = size - 1;
    int mid;
    bool found = false;
    while (first<=last && !found) {
        mid = (first + last) / 2;
        if (arr[mid] == item)
            found = true;
        else if (arr[mid] > item)
            last = mid - 1;
        else
            first = mid + 1;
    }
    if (found) {
        return mid;
    }
    else
        return -1;
}



void print(int arr[],int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int main()
{
    int number;
    cout << "Enter number to search :\n";
    cin >> number;
   int arr[] = {10,20,30,40};
   int n = sizeof(arr) / sizeof(arr[0]);
   int result = binarySearch(arr,n,number) ;
   if (result != -1) {
       cout << "Number found at index: " << result << endl;
   }
   else {
       cout << "Number not found in the array." << endl;
   }

   print(arr,n);
     
}

 