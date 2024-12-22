// fibonacci series 

#include <iostream>
using namespace std;

int fibo(int n) {
    if (n <= 0) {
        return -1; // Return -1 for invalid input
    }
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int n = 8;
    cout << "Fibonacci number at position " << n << " is " << fibo(n) << endl;

    return 0;
}

