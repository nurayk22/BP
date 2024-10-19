#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int steps;
    int x = 0, y = 0;

    while (cin >> s >> steps) {
        if (s == "North") {
            y += steps;
        } 
        else if (s == "South") {
            y -= steps;
        } 
        else if (s == "East") {
            x += steps;
        } 
        else if (s == "West") {
            x -= steps;
        }
    }

    cout << x << " " << y;
    return 0;
}
