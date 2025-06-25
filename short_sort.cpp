#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<string> s(t); 

    for(int i = 0; i < t; i++) {
        cin >> s[i];
    }

    for(int i = 0; i < t; i++) {
        if(s[i] == "abc") {
            cout << "YES" << endl;
        } else if(s[i] == "acb") {
            cout << "YES" << endl;
        } else if(s[i] == "bac") {
            cout << "YES" << endl;
        } else if(s[i] == "bca") {
            cout << "NO" << endl;
        } else if(s[i] == "cab") {
            cout << "NO" << endl;
        } else if(s[i] == "cba") {
            cout << "YES" << endl;
        }
    }
}