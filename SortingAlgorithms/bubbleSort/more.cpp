#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size);
void betterBubbleSort(int arr[], int size);
void betterBetterBubbleSort(int arr[], int size);
void swapping (int arr[], int a, int b);
void showArray(int arr[], int size);

int main(){
    int arr1[] = {1, 3, 2, 6, 5, 4};
    int arr2[] = {1, 3, 2, 6, 5, 4};
    int arr3[] = {1, 3, 2, 6, 5, 4};
    int length = sizeof(arr1) / sizeof(int);
    cout << "before doing bubble sort" << endl;
    showArray(arr1, length);
    bubbleSort(arr1, length);
    cout << endl << "before doing better bubble sort" << endl;
    showArray(arr2, length);
    betterBubbleSort(arr2, length);
    cout << endl <<  "before doing better better bubble sort" << endl;
    showArray(arr3, length);
    betterBetterBubbleSort(arr3, length);
}

void bubbleSort(int arr[], int size){
    cout << endl << "after sorting without swap count" << endl << endl;
    int loopCount = 1;
    int comparisonCount = 0 ;
    int swappingCount = 0;
    for (int i = 0 ; i < size ; i++){
        for (int j = 0 ; j < size -1 ; j++){
            cout << "this is " << "loop " << loopCount << "   i : " << i << "   j : " << j << "   j+1: " << j+1 << endl;
            loopCount++;
            comparisonCount++;
            cout << "comparing " << arr[j] << " and " << arr[j+1] << endl;
            for (int i = 0 ; i < size ; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
            if (arr[j] > arr[j+1]){
                swappingCount++;
                swapping(arr, j, j+1);
                cout << "a change happend" << endl;
            }
            cout << endl << endl;
        }
    }
    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "total number of loop count: " << loopCount << endl;
    cout << "total number of comparison count: " << comparisonCount << endl;
    cout << "total number of swapping count: " << swappingCount << endl;

}

void betterBubbleSort(int arr[], int size){
    cout << endl << "after sorting without swap count but better" << endl << endl;
    int loopCount = 1;
    int comparisonCount = 0 ;
    int swappingCount = 0;
    for (int i = 1 ; i <= size ; i++){
        for (int j = 0 ; j < size -i ; j++){
            cout << "this is " << "loop " << loopCount << "   i : " << i << "   j : " << j << "   j+1: " << j+1 << endl;
            loopCount++;
            comparisonCount++;
            cout << "comparing " << arr[j] << " and " << arr[j+1] << endl;
            for (int i = 0 ; i < size ; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
            if (arr[j] > arr[j+1]){
                swappingCount++;
                swapping(arr, j, j+1);
                cout << "a change happend" << endl;
            }
            cout << endl << endl;
        }
    }
    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "total number of loop count: " << loopCount << endl;
    cout << "total number of comparison count: " << comparisonCount << endl;
    cout << "total number of swapping count: " << swappingCount << endl;

}

void betterBetterBubbleSort(int arr[], int size){
    cout << endl << "after sorting without swap count but better" << endl << endl;
    int loopCount = 1;
    int comparisonCount = 0 ;
    int swappingCount = 0;
    bool isUnsorted = true;

    for (int i = 1 ; i <= size ; i++){
        if (isUnsorted){
            for (int j = 0 ; j < size -i ; j++){
                cout << "this is " << "loop " << loopCount << "   i : " << i << "   j : " << j << "   j+1: " << j+1 << endl;
                loopCount++;
                comparisonCount++;
                cout << "comparing " << arr[j] << " and " << arr[j+1] << endl;
                for (int i = 0 ; i < size ; i++){
                    cout << arr[i] << " ";
                }
                cout << endl;
                if (arr[j] > arr[j+1]){
                    isUnsorted = true;
                    swappingCount++;
                    swapping(arr, j, j+1);
                    cout << "a change happend" << endl;
                }
                else{
                    isUnsorted = false;
                }
                cout << endl << endl;
            }
        }

    }

    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "total number of loop count: " << loopCount << endl;
    cout << "total number of comparison count: " << comparisonCount << endl;
    cout << "total number of swapping count: " << swappingCount << endl;

}

void swapping (int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void showArray(int arr[], int size){
    for (int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << " " ;
    }
}
