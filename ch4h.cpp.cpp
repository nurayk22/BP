#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        int count = 0;

        for (int j = 0; j < s.length(); j++) {
            if (s[j] == c) {
                count++;
            }
        }

        if (count == 2) {
            cout << c;
            return 0;
        }
    }

    return 0;
}
