#include <iostream>

using namespace std;

int bin2dec();
int dec2bin();


int main(){
    cout << "please choose numerical option: \n1-binary to decimal \n2-decimal to binary " << endl;
    int selection;
    cin >> selection;
    if (selection == 1){
        cout << bin2dec()<< endl;
    }else if (selection == 2){
        cout << dec2bin()<< endl;
    }else{
        cout << "please choose between 1 and 2" << endl;
    }   
}

int bin2dec (){
    cout << "please enter the number" << endl;
    int num ;
    cin >> num;
    int power = 1;
    int answer = 0;
    while (num != 0){
        int lastDigit = num%10;
        answer = answer + lastDigit * power;
        power *= 2;
        num /= 10;
    }
    return answer;
}

int dec2bin(){
    cout << "please enter the number" << endl;
    int num;
    cin >> num;
    int power = 1;
    int answer = 0;
    while(num > 0){
        int rem = num % 2;
        answer = answer + power * rem;
        power *= 10;
        num /= 2;
    }
    return answer;
}