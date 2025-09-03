#include <iostream>
using namespace std;

int main()
{
    string s = "pwwkew";
    int max_length = 0;

    for (int i = 0; i <= s.length() - 1; i++)
    {
        bool seen[128] = {false};

        for (int j = i; j <= s.length() - 1; j++)
        {
            char charcter = s[j];
            if (seen[charcter])
            {
                break;
            }

            seen[charcter] = true;

            max_length = max(max_length, j - i + 1);
        }
    }

    cout << max_length;

    return 0;
}