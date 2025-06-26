#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        for (int k = 2; ; ++k) {
            long long denominator = (1LL << k) - 1;
            if (n % denominator == 0) {
                cout << n / denominator << endl;
                break;
            }
        }
    }
    return 0;
}



