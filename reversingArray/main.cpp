#include <iostream>

using namespace std;

void printarr(int arr[], int n);
void reverse(int arr[], int n);
void reverseit(int arr[], int n);
void printSubArray(int arr[], int n);

int main(){
    int arr2[] = {1, 2, 3, 4};
    int n = (sizeof(arr2) / sizeof(arr2[0]));
    printarr(arr2, n );
    cout << "__________" << endl;
    reverse(arr2, n);
    cout << "__________" << endl;
    reverseit(arr2, n);
    cout << "__________" << endl;
    printarr(arr2, n );
    cout << "__________" << endl;
    printSubArray(arr2, n);
    cout << "__________" << endl;
}

//printing the array
void printarr (int  arr[], int n){
    cout << "printing " << endl;
    for (int i = 0 ; i < n ; i++){
        cout << arr[i] << endl;
    }
}

void reverse(int arr[], int n){
    cout << "reverse printing " << endl;
    for (int i = n-1; i >= 0 ; i--){
        cout << arr[i] << endl;
    }
}

void reverseit(int arr[], int n){
    cout << "reversing the arrya" << endl;
    int start = 0;
    int stop = n - 1;
    int placeHolder = 0;
    while (start < stop){
        placeHolder = arr[start];
        arr[start] = arr[stop];
        arr[stop] = placeHolder;
        start++;
        stop--;
    }
}

void printSubArray(int arr[], int n){
    int counter = 0;
    for (int i = 0 ; i < n ; i++){
        for ( int j = i ; j < n ; j++){
            for (int k = i ; k <= j ; k++){
                cout << arr[k] << ",";
            }
            cout << endl;
            counter++;
        }
    }
    cout << "total subarrays = " << counter << endl;
}a