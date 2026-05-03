#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "abcba";
    int l = 0, r = str.length() - 1;
    while (l < r)
    {
        if (str[l] != str[r])
        {
            cout << "Not palindrome" << endl;
            return 0;
        }
        l++;
        r--;
    }

    cout << "Palindrome" << endl;
    return 0;
}