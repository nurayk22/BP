#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    if (s == t) {
        cout << "yes";
    }
    else {
        cout << "no";
    }

    return 0;
}
