 #include<bits/stdc++.h>
using namespace std;

int main() {
    int a[100];
    vector<int> prime;
    vector<int> notprime;

     for (int i = 2; i < 99; i++) {
        if (i % 2 == 0) {
            notprime.push_back(i);
        } else if(i%2!=0) {
            prime.push_back(i);
        }
    }

cout<<endl;
     cout << "Not prime Numbers:" << endl;
    for (auto n : notprime) {
        cout << n << " ";
    }
     cout<<endl;

     cout << "Prime Numbers:" << endl;
    for (auto p : prime) {
        cout << p << " ";
    }
    

    return 0;
}
