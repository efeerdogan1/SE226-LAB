#include <iostream>
using namespace std;

int main(){

    // Task 1 – Digital Root Sequence
    int num;
    int steps = 0;

    cout << "Enter a number greater than 9: ";
    cin >> num;

    cout << num;

    while(num >= 10){
        int temp = num;
        int digit_sum = 0;

        while(temp > 0){
            digit_sum += temp % 10;
            temp /= 10;
        }

        num = digit_sum;
        cout << " -> " << num;
        steps++;
    }

    cout << endl;
    cout << "Final value: " << num << endl;
    cout << "Total steps: " << steps << endl;


    // Task 2 – FizzBuzz Counter
    int userInN = 0;

    while(userInN < 10 || userInN > 100){
        cout << "Give me a positive Integer between 10 and 100: ";
        cin >> userInN;
    }

    int FizzCounter = 0;
    int BuzzCounter = 0;
    int FizzBuzz = 0;

    for(int i = 1; i <= userInN; i++){

        if(i % 7 == 0){
            continue;
        }

        if(i % 3 == 0 && i % 5 == 0){
            cout << "FizzBuzz" << endl;
            FizzBuzz++;
        }
        else if(i % 3 == 0){
            cout << "Fizz" << endl;
            FizzCounter++;
        }
        else if(i % 5 == 0){
            cout << "Buzz" << endl;
            BuzzCounter++;
        }
        else{
            cout << i << endl;
        }
    }

    cout << "Summary : Fizz Counter " << FizzCounter
         << " , Buzz Counter " << BuzzCounter
         << " , FizzBuzz Counter " << FizzBuzz << endl;


    // Task 3
    int userIn = 0;

    while(userIn < 3 || userIn > 9){
        cout << "Give me a positive Integer between 3 and 9: ";
        cin >> userIn;
    }

    for(int i = 1; i <= userIn; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }

    for(int i = userIn - 1; i > 0; i--){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
