#include <iostream>

using namespace std;

int linearSearch(int target, int size, int arr[]);

int main(){
    int arr[] = {9, 7, 1, 3, 2, 5, 4, 6, 8};
    int size = ((sizeof(arr)) / sizeof(arr[0]));
    cout << linearSearch(4, size, arr) << endl;
    cout << linearSearch(9, size, arr) << endl;
    cout << linearSearch(10, size, arr) << endl;
}

int linearSearch(int target, int size, int arr[]){
    for (int i = 0; i < size; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}
