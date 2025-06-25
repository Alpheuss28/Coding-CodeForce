#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 0;
    cin >> t;

    int a[t];
    int b[t];
    int c[t];

    for(int i = 0; i < t; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    for(int i = 0; i < t; i++) {
        if(a[i] != b[i] && a[i] != c[i]) {
            cout << a[i] << endl;
        } else if(b[i] != a[i] && b[i] != c[i]) {
            cout << b[i] << endl;
        } else if(c[i] != a[i] && c[i] != b[i]) {
            cout << c[i] << endl;
        }
    }

    return 0;
}
