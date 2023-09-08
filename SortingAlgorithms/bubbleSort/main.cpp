#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size);
void swapping (int arr[], int a, int b);
void showArray(int arr[], int size);

int main(){
    int arr[] = {9, 7, 1, 3, 2, 5, 4, 6, 8};
    int size = sizeof(arr) / sizeof(int);
    cout << "before bubble sorting: " << endl;
    showArray(arr, size);
    cout << "after bubble sorting: " << endl;
    bubbleSort(arr, size);
    showArray(arr, size);
}

void bubbleSort(int arr[], int size){
    for (int i = 1 ; i <= size ; i++){
    bool isUnsorted = true;
        if (isUnsorted){
            for (int j = 0 ; j < size - i ; j++){
                if (arr[j] > arr[j+1]){
                    isUnsorted = true;
                    swapping(arr, j, j+1);
                }
                else{
                    isUnsorted = false;
                }
            }
        }
    }
}

void swapping (int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void showArray(int arr[], int size){
    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}
