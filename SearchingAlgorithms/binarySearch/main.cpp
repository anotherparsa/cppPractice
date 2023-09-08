#include <iostream>

using namespace std;

int binarySearch(int target, int size, int arr[]);

int main(){
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = ((sizeof(arr)) / sizeof(arr[0]));
    cout << binarySearch(4, size, arr) << endl;
    cout << binarySearch(9, size, arr) << endl;
    cout << binarySearch(10, size, arr) << endl;
}

int binarySearch(int target, int size, int arr[]){
    int start = 0;
    int end = size - 1;
    while (start <= end){
        int middle = (start + end) / 2;
        if (arr[middle] == target){
            return middle;
        }else if (arr[middle] > target){
            end = middle - 1;
        }else{
            start = middle + 1;
        }
    }
    return -1;
}
