#include <iostream>

using namespace std;

int main(){
    int start, stop;
    cout << "enter the starting number: " << endl;
    cin >> start;
    cout << "enter where to stop: " << endl;
    cin >> stop;
    int sum = 0 ;
    for (int i = start ; i <= stop ; i++){
        sum += i ; 
    }
    cout << "the sum between " << start << " And " << stop << " is " << sum << endl; 

}