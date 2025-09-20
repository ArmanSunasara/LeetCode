#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string num;
    cin >> num;
    
    // Sort the digits in descending order
    sort(num.begin(), num.end(), greater<char>());
    
    cout << num << endl;
    
    return 0;
}