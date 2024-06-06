#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;

        // 1st part
        while (j <= (n + 1 - i))
        {
            cout << j << " ";
            j = j + 1;
        }

        // 2nd part
        int start = 1;
        while (start <= 2 * i - 2)
        {
            cout << "*" << " ";
            start = start + 1;
        }

        // 3rd part
        int rev = n + 1 - i;
        while (rev >= 1)
        {
            cout << rev << " ";
            rev = rev - 1;
        }

        cout << endl;
        i = i + 1;
    }

    return 0;
}
