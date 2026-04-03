// Question 4
#include <iostream>

using namespace std;

int power(int r, int n){
    if (n == 0){
        return 1;
    }
    return r * power(r, n-1);
}

int recursiveFunc(int n, int r){
    if (n == 0){
        return 1;
    }  
    return recursiveFunc(n-1,r) + power(r,n);
}

int main(){
    int n,r;
    cout << "Give me the n" << endl;
    cin >> n;

    if (n < 0){
        cout << "n cannot be smaller than 0" << endl;
        return 1;
    }
    cout << "Give me the common ratio" << endl;
    cin >> r;
    

    int result = recursiveFunc(n,r);

    cout << "Result is: " << result << endl;

    return 0;
}

