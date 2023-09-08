#include <iostream>

using namespace std;

int main(){
    int Num1, Num2;
    cout << "enter the first number: " << endl;
    cin >> Num1;
    cout << "enter the second number: " << endl;
    cin >> Num2;
    int GCD = 0;
    for (int i = 1 ; i <= min(Num1, Num2) ; i++){
        if ((Num1 % i == 0 ) && (Num2 % i == 0)){
            GCD = i;
        }
    }
    cout << "the GCD between " << Num1 << " and " << Num2 << " is " << GCD << endl;
}