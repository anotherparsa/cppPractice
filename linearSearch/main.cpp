#include <iostream>

using namespace std;

int linearSearch( int target, int size, int array[] );

int main(){
    int array[] = {1, 43, 34, 234, 63, 234, 643, 212, 6765, 45, 21};
    int size = ((sizeof(array)) / sizeof(array[0]));
    cout << linearSearch(234, size, array) << endl;
    cout << linearSearch(6765, size, array) << endl;
    cout << linearSearch(3424, size, array) << endl;

}

int linearSearch( int target, int size, int array[] ){
    int counter = 0;
    for (int i = 0 ; i < size ; i++){
        counter++;
        if (array[i] == target){
            return counter;
            break;
        }
    }
    return -1;

}


