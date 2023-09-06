#include <iostream>

using namespace std;

int binarySearch(int target, int size, int array[]); 

int main(){
    int array[] = {1, 23, 54, 65, 72, 124, 456, 876, 999};
    int size = ((sizeof(array)) / sizeof(array[0]));
    cout << binarySearch(54, size, array) << endl;
    cout << binarySearch(456, size, array) << endl;
    cout << binarySearch(4566, size, array) << endl;
}


int binarySearch(int target, int size, int array[]){
    int start = 0;
    int end = size -1;
    while(start <= end){
        int middle = (start + end) / 2;
        if (array[middle] == target){
            return middle;
        }else if (array[middle] > target){
            end = middle - 1;
        }else{
            start = middle + 1;
        }
    }
    return -1;
}


