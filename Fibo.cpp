#include <iostream>
using namespace std;

int fibo(int n) {
    if (n <= 1) {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = fibo(n);
    cout << "Fibonacci of " << n << " is " << result << endl;

    return 0;
}
