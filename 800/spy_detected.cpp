#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 0;
    cin >> t;

    int n = 0;
    vector<int> a(t);

    for(int i = 0; i < t; i++) {
        cin >> n;
        for(int j = 0; j < n; j++) {
            cin >> a[j];
        }
    }

    for(int = 0; i < t; i++) {
        if(a[i] != a[i+1] && a[i+1] != a[i+2]) {
            cout << i+1;
        }
    }
}
