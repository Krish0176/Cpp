#include <iostream>
using namespace std;
int reverseNumber(int n, int rev) {
    if (n == 0)
        return rev;

    int digit = n % 10;
    rev = rev * 10 + digit;

    return reverseNumber(n / 10, rev);
}
int main() {
    int n = 1234;

    cout << reverseNumber(n, 0);

    return 0;
}