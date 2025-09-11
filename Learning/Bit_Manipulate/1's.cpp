#include <iostream>
using namespace std;

int countOnes(int n) {
    int count = 0;
    while (n) {
        count += n & 1;    
        n >>= 1;           
    }
    return count;
}


int countOnesOptimized(int n) {
    int count = 0;
    while (n) {
        n &= (n - 1);    
        count++;
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Number of 1's (Method 1): " << countOnes(num) << endl;
    cout << "Number of 1's (Method 2): " << countOnesOptimized(num) << endl;
    
    return 0;
}