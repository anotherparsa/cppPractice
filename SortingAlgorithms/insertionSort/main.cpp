#include <iostream>

using namespace std;

void insertionSort(int arr[], int size);
void showArray(int arr[], int size);
void swaPPing(int arr[], int a, int b);

int main(){
    int arr[] = {5, 3, 4, 2, 1, 8, 9, 7, 6};
    int size = sizeof(arr) / sizeof(int);
    cout << "before insertion sorting: " << endl;
    showArray(arr, size);
    cout << "after insertion sorting: " << endl;
    insertionSort(arr, size);
    showArray(arr, size);
}

void insertionSort(int arr[], int size){
    for (int i = 1 ; i < size ; i++){
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp){
            swaPPing(arr, j+1, j);
            j--;
        }
        arr[j+1] = temp;
    }
}

void showArray(int arr[], int size){
    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swaPPing(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}