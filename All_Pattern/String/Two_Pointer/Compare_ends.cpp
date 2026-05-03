#include <iostream>
#include <string>

using namespace std;

bool endsWith(string s, string t) {
    int n = s.length();
    int m = t.length();
    
    if (m > n) return false;

    int i = n - 1;
    int j = m - 1;

    while (j >= 0) {
        if (s[i] != t[j]) return false;
        i--;
        j--;
    }
    return true;
}

int main() {
    string s1 = "hello world";
    string t1 = "world";
    cout << "\"" << s1 << "\" ends with \"" << t1 << "\": " << (endsWith(s1, t1) ? "true" : "false") << "\n";

    string s2 = "programming";
    string t2 = "gram";
    cout << "\"" << s2 << "\" ends with \"" << t2 << "\": " << (endsWith(s2, t2) ? "true" : "false") << "\n";

    string s3 = "test";
    string t3 = "testing";
    cout << "\"" << s3 << "\" ends with \"" << t3 << "\": " << (endsWith(s3, t3) ? "true" : "false") << "\n";

    return 0;
}