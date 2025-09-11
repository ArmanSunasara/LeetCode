#include <iostream>
#include <bitset>
using namespace std;


int findTwosComplement(int n) {
    
   
    return (~n) + 1;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;


    cout << "Original number in binary: " << bitset<8>(num) << endl;
    
    int twosComp = findTwosComplement(num);
    cout << "2's complement in binary: " << bitset<8>(twosComp) << endl;
    cout << "2's complement value: " << twosComp << endl;

    return 0;
}