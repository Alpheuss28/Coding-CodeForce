#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<string> s(t);

    for(int i = 0; i < t; i++) {
        cin >> s[i];
    }

    string dif = "codeforces";

    for(int i = 0; i < t; i++) {
        int count = 0;
        for(int j = 0; j < s[i].length(); j++) {
            if(s[i][j] != dif[j]) {
                count++;
            }
        }
        cout << count << endl;
    }




}
