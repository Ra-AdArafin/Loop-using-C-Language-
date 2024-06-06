#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout << "Enter Number:";
    cin >> n;
    int first = 0;
    int second = 1;
    int sum = 0;
    int result;
    int i = 0;
    while (i <= n)
    {

        cout << first << " ";
        sum = sum + first;
        int result = first + second;
        first = second;
        second = result;
        i++;
    }
    cout << endl;
    cout << "Total sum=" << sum << " ";

    return 0;
}