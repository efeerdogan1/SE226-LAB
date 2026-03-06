#include <iostream>

using namespace std;

int main(){
    int num;
    int steps = 0;

    cout << "Give me a number greater than 9: ";
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
    cout << "Final Value " << num << endl;
    cout << "Total Steps " << steps << endl;

    // Task 2
    int userInN = 0;

    while(userInN < 10 || userInN > 100){
        cout << "Give me a positive Integer between 10 and 100: ";
        cin >> userInN;
    }

    int FizzCounter = 0;
    int BuzzCounter = 0;
    int FizzBuzz = 0;

    if(userInN % 3 == 0 && userInN % 5 == 0){
        cout << "FizzBuzz" << endl;
        FizzBuzz++;
    }
    else if(userInN % 7 == 0){
        // pass (do nothing)
    }
    else if(userInN % 3 == 0){
        cout << "Fizz" << endl;
        FizzCounter++;
    }
    else if(userInN % 5 == 0){
        cout << "Buzz" << endl;
        BuzzCounter++;
    }
    else{
        cout << userInN << endl;
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
