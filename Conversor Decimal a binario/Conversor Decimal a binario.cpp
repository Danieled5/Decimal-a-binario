//Eduardo Daniel Perez Roman
//Decimal a Binario

#include <iostream>
#include <cmath>
using namespace std;

long long convert(int);

int main() {
    int n, bin;
    cout << "Ingresa un numero Decimal: ";
    cin >> n;
    bin = convert(n);
    cout << n << " En Decimal = " << bin << " En binario" << endl;
    return 0;
}

long long convert(int n) {
    long long bin = 0;
    int rem, i = 1;

    while (n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }

    return bin;
}