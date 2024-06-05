 #include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int i = 1;

    // Print the pattern
    while (i <= n) {
        // Print spaces
        int space = n - i;
        while (space > 0) {
            cout << " ";
            space--;
        }

        // Print the first part of numbers (increasing sequence)
        int j = 1;
        while (j <= i) {
            cout << j << " ";
            j++;
        }

        // Print the second part of numbers (decreasing sequence)
        int k = i - 1;
        while (k >= 1) {
            cout << k << " ";
            k--;
        }

        cout << endl;
        i++;
    }

    return 0;
}
