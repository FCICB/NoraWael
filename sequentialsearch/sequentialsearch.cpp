 
#include <iostream>
using namespace std;

int seqSearch(int arr[],int item,int size) {
    int position;
    bool found = false;
    for (position = 0; position < size;position++) 
        if (arr[position] == item) {
            found = true;
            break;
        
    }
    if (found)
        return position;
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
    cout << "Enter number to search:\n";
    cin >>number ;
    int arr[] = {20,5,4,50,30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = seqSearch(arr, number, n);
    if (result != -1) {
        cout << "Number found at index: " << result << endl;
    }
    else {
        cout << "Number not found in the array." << endl;
    }
    print(arr,n);
    

}

 