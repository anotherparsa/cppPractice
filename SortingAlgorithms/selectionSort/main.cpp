#include <iostream>

using namespace std;

void selectionSort(int arr[], int size);
void swapping(int arr[], int a, int b);
void showArray(int arr[], int size);

int main(){
    int arr[] = {3, 6, 2, 7, 23, 634, 6534, 233};
    int size = sizeof(arr) / sizeof(int);
    cout << "before sorting" << endl;
    showArray(arr, size);
    selectionSort(arr, size);
    cout << "after sorting" << endl;
    showArray(arr, size);
}

void selectionSort(int arr[], int size){
    for (int i = 0 ; i < size - 1 ; i++){
        int minIndex = i;
        for (int j = i + 1 ; j < size ; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
                if (i != minIndex){
                    swapping(arr, i, minIndex);
                }
            }
        }
    }
}

void swapping(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void showArray(int arr[], int size){
    for (int i = 0 ; i < size  ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}