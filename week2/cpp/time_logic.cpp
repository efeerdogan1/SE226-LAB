#include <iostream>

using namespace std;

int main(){
    long userIn ,hours ,minutes , seconds;

    cout << "Give me a large integer representing a total number of seconds" << endl;
    cin >> userIn;

    hours = userIn / 3600;
    long remainingSeconds = userIn % 3600;

    minutes = remainingSeconds / 60;
    seconds = remainingSeconds % 60;

    cout << userIn << " seconds is "
        << hours << " hours, "
        << minutes << " minutes, and "
        << seconds << " seconds." << endl;

    return 0;
}