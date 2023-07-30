#include <iostream>

using namespace std;

int findFactorial(int number){
    int answer = 1;
    for (int i = 1 ; i <= number ; i++){
        answer *= i;
    }
    return answer;
}

int main(){
    int number;
    cout << "please enter the number:" << endl;
    cin >> number;
    cout << findFactorial(number) << endl;
}