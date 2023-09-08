#include <iostream>

using namespace std;

int main(){
    int number;
    bool flag = false;
    cout << "please enter the number :" << endl;
    cin >> number;
    if ((number == 2) || (number % 2 == 0)){
        cout << "it's a composite number" << endl;
    }else{
        for (int i = 2 ; i < number ; i++ ){
            if (number % i == 0){
                flag = true;
                break;
            }
        }
        if (flag){
            cout << "it's a composite number" ;
        }else{
            cout << "it's a prime number" ;
        }
    }


}