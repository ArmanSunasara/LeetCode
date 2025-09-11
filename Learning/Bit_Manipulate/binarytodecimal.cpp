#include <iostream>
using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0;
    int base = 1;
    
    while (binary > 0) {
        int lastDigit = binary % 10;
        binary = binary / 10;
        decimal += lastDigit * base;
        base = base * 2;
    }
    
    return decimal;
}

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    
    cout << "Decimal equivalent: " << binaryToDecimal(binary) << endl;
    
    return 0;
}