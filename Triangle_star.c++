 #include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int i = 1;
    
    while (i <= n) {
        // space count
        int space = n - i;
        while (space > 0) {
            // যদি space 0 থেকে বড় হয় তাহলেই কাজ করবে
            // space 0 হয়ে গেলে লুপ কাজ করবে না
            // প্রথমে space 3, 2, 1 এভাবে কাজ করবে, একসময়
            // space 0 হয়ে যাবে তখনই লুপ থেমে যাবে।
            cout << " ";
            // space 3, 2, 1, 0 এভাবে কমবে।
            // space না কমালে লুপ ইনফিনিটি বার চলবে।
            space = space - 1;
        }

        // space count করা শেষ, এবার * প্রিন্ট করার পালা
        int j = 1;  // j কে প্রতিবার বাইরের লুপের শুরুতে ইনিশিয়ালাইজ করতে হবে
        while (j <= i) {
            cout << "*";
            j = j + 1;
        }
        
        cout << endl;
        i = i + 1;
    }

    return 0;
}
****
***
**
*