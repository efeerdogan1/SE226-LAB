#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int distance,firstX ,firstY, secondX , secondY;

    cout << "Give me the first coordinate's x" << endl;
    cin >> firstX;

    cout << "Give me the first coordinate's y" << endl;
    cin >> firstY;
        
    cout << "Give me the second coordinate's x" << endl;
    cin >> secondX;
        
    cout << "Give me the second coordinate's y" << endl;
    cin >> secondY;

    int dx = secondX - firstX;
    int dy = secondY - firstY;

    distance = sqrt((dx * dx) + (dy * dy));

    cout << "Distance is " << distance << endl;

    return 0;
}