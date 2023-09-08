#include <iostream>

using namespace std;

int check(int mainArray[], int sizeOfMainArray, int givenArray[], int sizeofGivenArray);

int main(){
    int mainArray[] = {1, 3, -1, 10, 44, 76, -98, 56, 23};
    int givenArray[] = {3, 44, -98, 23};
    int sizeOfMainArray = sizeof(mainArray) / sizeof(int);
    int sizeOfGivenArray = sizeof(givenArray) / sizeof(int);
    cout << "given array is a subsequence of the main array? :" << check(mainArray, sizeOfMainArray, givenArray, sizeOfGivenArray) << endl;
}


int check(int mainArray[], int sizeOfMainArray, int givenArray[], int sizeOfGivenArray){
    int x = 0;
    int y = 0;
    while (x < sizeOfMainArray && y < sizeOfGivenArray){
        if (mainArray[x] == givenArray[y]){
            x++;
            y++;
        }else{
            x++;
        }
    }
    if (y == sizeOfGivenArray){
        return 1;
    }else{
        return 0;
    }
}