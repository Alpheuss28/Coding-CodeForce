#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = n + 1; ; ++i) {
        bool prime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            if (i == m) cout << "YES";
            else cout << "NO";
            break;
        }
    }

    return 0;
}
