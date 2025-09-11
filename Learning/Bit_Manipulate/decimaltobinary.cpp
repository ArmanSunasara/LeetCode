#include <iostream>
using namespace std;

void decimalToBinary(int n) {
   
    int binaryNum[32];
    int i = 0;
    

    if (n == 0) {
        cout << "0";
        return;
    }
    
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    
    cout << "Binary representation: ";
    decimalToBinary(decimal);
    cout << endl;
    
    return 0;
}